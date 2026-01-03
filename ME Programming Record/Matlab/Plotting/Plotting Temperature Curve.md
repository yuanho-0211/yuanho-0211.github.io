# Plot Temperature Curve
```c
% Fits a quadratic curve to temperature data
x= 2:6;
x1=2:0.1:6
y =[65 67 72 71 63];
coefs = polyfit(x,y,2);
curve = polyval(coefs,x1);
plot(x,y,'ro',x1,curve)
xlabel('Time')
ylabel('Temperatures')
title('Temperatures one afternoon')
axis([1 7 60 75])
```
## plotting:
<img width="826" height="743" alt="image" src="https://github.com/user-attachments/assets/5de9b26f-d6da-4932-88c4-826ec36551e8" />


