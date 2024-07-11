const express = require('express');
const app = express();
const port = 3000;
app.set("view engine", "ejs");
const axios = require('axios');
const url = 'https://www.jma.go.jp/bosai/forecast/data/overview_forecast/260000.json';
const OpenAI = require('openai');
require('dotenv').config();
const openai = new OpenAI({ apiKey: process.env.OPENAI_API_KEY });

// コメント生成用プロンプト
const prompt_for_comment ="以下の気象予報を踏まえて、兄のことが大好きな若い妹の文体で、今日を元気に過ごすためのポジティブなコメントを作成してください。\n\n ## 気象予報:\n\n" 
// 画像生成用プロンプト
const prompt_for_image ="以下のコメントに対応する画像を生成してください。画像中の妹は日本人の若い女性で、画像にはコメント中のキーワードを表すイメージをできるだけ多く含めてください。ただし、文字は入れないでください。\n\n## コメント\n\n"

app.get('/', async (req, res) => {
  try {
    const response = await axios.get(url)
    const forecast = response.data.text;
    const comment = await completion(forecast);
    const imageURL = await genarateImage(comment);
    res.render("weather", { forecast: forecast, comment: comment, image: imageURL});
  } catch (error) {
    console.error('Error:', error);
    res.status(500).send('エラーが発生しました。');
  }
});

app.listen(port, () => {
  console.log(`listening on port ${port}`);
});

async function completion(forecast) {
  const completion = await openai.chat.completions.create({
    messages: [{
      role: "system",
      content: prompt_for_comment + forecast
    }],
    model: "gpt-4o",
  });
  return completion.choices[0].message.content;
}

async function genarateImage(keywords) {
  const imageResponse = await openai.images.generate({
    model: "dall-e-3",
    prompt: prompt_for_image + keywords,
    n: 1, 
    size: "1024x1024", 
  });
  return imageResponse.data[0].url;
};
