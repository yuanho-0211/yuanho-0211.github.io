```c
import numpy as np
import matplotlib.pyplot as plt
#Load data from your file
data=np.loadtxt('C:/Users/chih7/Downloads/ecg_data/group5_30sec_Original_ECG.csv')
plt.subplot(311)
plt.plot(data[0:1500])
plt.xlabel('Data (Time, 1/200 sec)')
plt.ylabel('mv')
plt.title('ECG Signal')
plt.subplot(312)
plt.plot(data[1501:3000])
plt.xlabel('Data (Time, 1/200 sec)')
plt.ylabel('mv')
plt.title('ECG Signal')
```
## plot:
<img width="842" height="451" alt="image" src="https://github.com/user-attachments/assets/4a6fa210-483a-4e84-96ca-4bd85c7b78b3" />
