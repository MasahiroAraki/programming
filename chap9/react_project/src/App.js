import React, { useState } from 'react';

function App() {
  const [data, setData] = useState({
    weather: "",
    schedule: ""
  });
  const [advice, setAdvice] = useState('');

  const handleChange = (e) => {
    const { name, value } = e.target;
    setData(prevData => ({
      ...prevData,
      [name]: value
    }));
  };

  const generateAdvice = async () => {
    const prompt = `今日の天気は${data.weather}で、予定は${data.schedule}です。この条件に合わせた行動のアドバイスを簡潔に教えてください。`;

    try {
      const session = await window.ai.assistant.create();
      const result = await session.prompt(prompt);
      setAdvice(result);
    } catch (error) {
      console.error("Error generating advice:", error);
      setAdvice("アドバイスの生成中にエラーが発生しました。");
    }
  };

  return (
    <div>
      <h1>今日の天気と予定</h1>
      <div>
        <label htmlFor="weather">天気: </label>
        <input
          type="text"
          id="weather"
          name="weather"
          value={data.weather}
          onChange={handleChange}
        />
      </div>
      <div>
        <label htmlFor="schedule">予定: </label>
        <input
          type="text"
          id="schedule"
          name="schedule"
          value={data.schedule}
          onChange={handleChange}
        />
      </div>
      <button onClick={generateAdvice}>
        アドバイスを生成
      </button>
      <h2>アドバイス:</h2>
      <p>{advice}</p>
    </div>
  );
}

export default App;
