import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

# NumPy で0以上1未満の乱数を100個生成
rng = np.random.default_rng()
data = rng.random(100)

# Pandas の DataFrame（列見出し 'Value' の100行1列）に変換
df = pd.DataFrame({'Value': data})

# Pandas で移動平均（ウィンドウ幅5）を計算して，列として追加
df['Moving Average'] = df['Value'].rolling(window=5).mean()

# Matplotlib で元のデータと移動平均をプロット
plt.figure(figsize=(10, 6))
plt.plot(df['Value'], label='Original Data')
plt.plot(df['Moving Average'], label='Moving Average', color='red')
plt.title('Original Data and Moving Average')
plt.xlabel('Sample Number')
plt.ylabel('Value')
plt.legend()
plt.grid(True)
plt.show()
