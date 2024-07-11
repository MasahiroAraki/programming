const url = 'https://www.jma.go.jp/bosai/forecast/data/overview_forecast/260000.json';

fetch(url)
    .then(response => {
        if (!response.ok) {
            throw new Error('ネットワークに問題があります。' + response.statusText);
        }
        return response.json();
    })
    .then(data => {
        console.log(data);
    })
    .catch(error => {
        console.error('データが取得できません:', error);
    });
    