```c
%load
load gong
gongSound = y;

load chirp
chirpSound = y;

combinedSound = [gongSound; chirpSound];  

sound(combinedSound, Fs);
```
