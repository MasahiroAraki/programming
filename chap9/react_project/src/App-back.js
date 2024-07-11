import React, { useState, useEffect } from 'react';

function App() {
  const [prompt, setPrompt] = useState('');
  const [output, setOutput] = useState('');
  const [canCreate, setCanCreate] = useState(false);

  useEffect(() => {
    async function checkAIAvailability() {
      if (window.ai && typeof window.ai.canCreateTextSession === 'function') {
        const result = await window.ai.canCreateTextSession();
        setCanCreate(result !== "no");
      }
    }
    checkAIAvailability();
  }, []);

  const handlePromptChange = (event) => {
    setPrompt(event.target.value);
  };

  const handleSubmit = async () => {
    if (!canCreate) {
      console.log("Not available Gemini Nano.");
      return;
    }

    setOutput('');
    try {
      const session = await window.ai.createTextSession();
      const result = await session.prompt(prompt);
      setOutput(result);
    } catch (error) {
      console.error("Error processing prompt:", error);
      setOutput("An error occurred while processing your request.");
    }
  };

  return (
    <div className="App">
      <input
        type="text"
        value={prompt}
        onChange={handlePromptChange}
        placeholder="Enter your prompt"
      />
      <button onClick={handleSubmit} disabled={!canCreate}>
        Run
      </button>
      <p>{output}</p>
    </div>
  );
}

export default App;