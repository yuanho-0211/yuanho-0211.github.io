```c
% A
A = randi([1, 30], 5, 4);
disp('Matrix A:');
disp(A);
overall_mode = mode(A(:));
fprintf('Mode of all elements in the matrix: %d\n', overall_mode);
```
