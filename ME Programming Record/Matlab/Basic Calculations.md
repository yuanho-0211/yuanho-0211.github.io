```c
%x
x = [2 4 8 3 8];

min_val = min(x);
max_val = max(x);
mean_val = mean(x);
var_val = var(x);
mode_val = mode(x);
median_val = median(x);
harm_mean = length(x) / sum(1 ./ x);
geo_mean = prod(x)^(1/length(x));

fprintf('Minimum: %.2f\n', min_val);
fprintf('Maximum: %.2f\n', max_val);
fprintf('Mean (Arithmetic): %.2f\n', mean_val);
fprintf('Variance: %.2f\n', var_val);
fprintf('Mode: %.2f\n', mode_val);
fprintf('Median: %.2f\n', median_val);
fprintf('Harmonic Mean: %.2f\n', harm_mean);
fprintf('Geometric Mean: %.2f\n', geo_mean);
```
