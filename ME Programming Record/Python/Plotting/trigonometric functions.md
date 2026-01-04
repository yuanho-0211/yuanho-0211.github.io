```c
import math
file = open('txtdata2.txt', 'w')
for i in range(100):
    x = math.sin(i)
    y = math.cos(i)
    z= math.tan(i)
    print(x,y,z)
    txt=str(i)+'\t' + str(x) +'\t' + str(y)+ '\t' + str(z)+'\n'
    file.write(txt)
file.close()
import numpy as np
import pylab as pl
data = np.loadtxt("txtdata2.txt")
pl.subplot(311)
pl.plot(data[:,0], data[:,1], "r")
pl.xlabel("x")
pl.ylabel("y")
pl.xlim(0.0, 100.)
pl.subplot(312)
pl.plot(data[:,0], data[:,2], "r")
pl.xlabel("x")
pl.ylabel("y")
pl.xlim(0.0, 100.)
pl.subplot(313)
pl.plot(data[:,0], data[:,3], "r")
pl.xlabel("x")
pl.ylabel("y")
pl.xlim(0.0, 100.)
pl.show()    
```
## plot:
<img width="566" height="340" alt="image" src="https://github.com/user-attachments/assets/8ef8227c-b035-4a87-8649-6b4c98c6bceb" />
