```c
import numpy as np
import matplotlib.pyplot as plt
#Load data from your file
data=np.loadtxt('C:/Users/chih7/Downloads/ecg_data/group1_30sec_Original_ECG.csv')
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
<img width="827" height="470" alt="image" src="https://github.com/user-attachments/assets/1d1cb34e-f0db-4a5b-af73-91994f6bf97f" />
