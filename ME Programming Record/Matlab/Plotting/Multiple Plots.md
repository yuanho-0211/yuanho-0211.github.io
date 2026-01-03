# Multiple Plots

-**Bar Chart**
-**Pie Chart**
-**Horizontal Bar Chart**
-**Stem Plot**

```c
%departments
departments = {'ME', 'BM', 'CE', 'EE'};
faculty_counts = [22, 45, 23, 33];
figure;

subplot(2,2,1);
bar(faculty_counts);
set(gca, 'XTickLabel', departments);
ylabel('Number of Faculty');
title('Bar Chart of Faculty per Department');
legend('Faculty Count');

subplot(2,2,2);
pie(faculty_counts, departments);
title('Faculty Distribution (Pie Chart)');
legend(departments, 'Location', 'southoutside');

subplot(2,2,3);
barh(faculty_counts);
set(gca, 'YTickLabel', departments);
xlabel('Number of Faculty');
title('Horizontal Bar Chart');
legend('Faculty Count');

subplot(2,2,4);
stem(faculty_counts, 'filled');

xticklabels(departments);
ylabel('Number of Faculty');
title('Stem Plot of Faculty Counts');
legend('Faculty Count');

```
## plot:
<img width="1117" height="996" alt="image" src="https://github.com/user-attachments/assets/1e0c0c3d-0c04-4e2f-aef7-ecb0c14274be" />
