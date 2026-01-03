## Quadratic Polynomial

```c
f=[3,-2,-4]
%root
r=roots([3,-2,-4])
x=-3:0.1:3
y=polyval(f,x)
y2=polyval(f,r)
plot(x, y, 'b-', 'LineWidth', 2);
hold on;

plot(r, y2, 'ro', 'MarkerSize', 10, 'LineWidth', 2);

xlabel('x');
ylabel('f(x)');
title('Plot of f(x) = 3x^2 - 2x - 4');
grid on;

hold off;
```
## plot:
<img width="830" height="736" alt="image" src="https://github.com/user-attachments/assets/6d8c8009-6a80-4f44-9629-f7fa632c0481" />
