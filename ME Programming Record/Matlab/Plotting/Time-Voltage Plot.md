# Time-Voltage Plot

```c
% time
time = [0, 1, 2, 3, 4, 5, 6, 7];        
voltage = [1.1, 1.9, 3.3, 3.4, 3.1, 3.3, 7.1, 7.5];

f = polyfit(time, voltage, 1);

y_fit = polyval(f, time);  

figure;
plot(time, voltage, 'ro', 'MarkerSize', 8, 'DisplayName', '樣本電壓'); 
hold on;
plot(time, y_fit, 'b-', 'LineWidth', 2, 'DisplayName', '擬合直線');   


xlabel('時間 (秒)');
ylabel('電壓 (伏特)');
title('時間對電壓的線性擬合');
legend('show');
grid on;
hold off;

m = f(1); 
b = f(2); 
V_target = 5;
t_when_V5 = (V_target - b) / m;

fprintf('當電壓為 5 伏特時，時間約為 %.2f 秒。\n', t_when_V5);
```
## plot:
<img width="829" height="742" alt="image" src="https://github.com/user-attachments/assets/b20146f4-5d18-499c-aea0-05f376d79cc2" />


