import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

# Generate a simple dataset using NumPy
np.random.seed(0)
data = np.random.randn(100)

# Create a DataFrame with Pandas
df = pd.DataFrame({'Value': data})

# Calculate the moving average
df['Moving Average'] = df['Value'].rolling(window=5).mean()

# Plotting the data and the moving average using Matplotlib
plt.figure(figsize=(10, 6))
plt.plot(df['Value'], label='Original Data')
plt.plot(df['Moving Average'], label='Moving Average', color='red')
plt.title('Original Data and Moving Average')
plt.xlabel('Sample Number')
plt.ylabel('Value')
plt.legend()
plt.grid(True)
plt.show()
