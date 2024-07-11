import React, { useState } from 'react';

function App() {
  const [data, setData] = useState({
    weather: "晴",
    schedule: "10:00 散歩"
  });

  const handleChange = (e) => {
    const { name, value } = e.target;
    setData(prevData => ({
      ...prevData,
      [name]: value
    }));
  };

  return (
    <div>
      <h1>天気と予定</h1>
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
      <h2>現在のデータ:</h2>
      <pre>{JSON.stringify(data, null, 2)}</pre>
    </div>
  );
}

export default App;
