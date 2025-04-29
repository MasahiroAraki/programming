# 環境
* VSCodeから左下の「リモートウィンドウを開きます」→「新しい開発コンテナ」→「typescript-node」を選択して作成された .devcontainer ディレクトリを使用しています。
* JavaScriptのコードは [TypeScript Playground](https://www.typescriptlang.org/play/)での実行を前提としています。「TS Config」→「Lang」で JavaScript を選択してください。
* c9-1.html: ブラウザ
* c9-1a.js: TypeScript Playground
* c9-1b.js: TypeScript Playground
* c9-1c.js: TypeScript Playground or node
* c9-1d.ts: TypeScript Playground
* c9-1e.ts: TypeScript Playground or ts-node
* c9-1f.ts: TypeScript Playground or ts-node
* c9-2.js: TypeScript Playground or node
* express_project: cd express_project & node apps.js
* react_project: cd react_project & npm start
  * 2025/4/29 Listing 9.5 から変更あり Chrome 135 で動作確認済
  * Chrome で Gemini nano を使う準備
    * Chrome のアドレスバーから chrome://flags を開き、以下を設定した後、Chrome を再起動
      1. "Enables optimization guide on device" の値を "Enabled BypassPerfRequirement" に
      2. "Prompt API for Gemini Nano" の値を Enable に
      3. "Text Safety Classifier" の値を "Enabled Executes safety classifier but no retraction of output" に
    * Chrome のアドレスバーから chrome://components を開き、以下の項目をクリックしてダウンロード完了後、Chrome を再起動
      * "Optimization Guide On Device Model" 
        * バージョン番号が表示されれば完了
        * この項目が表示されない場合は、ディベロッパーツールのコンソールから `await ai.languageModel.create()` を実行
