# Pie Chart
```c
course_names = {'CH 101', 'CH 105', 'CH 555'};
enrollments = [111, 52, 12];
%total
total_students = sum(enrollments);
percentages = enrollments / total_students * 100;

labels_course_only = course_names;

labels_with_percent = cell(1, length(course_names));
for i = 1:length(course_names)
    labels_with_percent{i} = sprintf('%s (%.1f%%)', course_names{i}, percentages(i));
end

figure;
subplot(1, 2, 1);
pie(enrollments, labels_course_only);
title('Course Numbers');

subplot(1, 2, 2);
pie(enrollments, labels_with_percent);
title('Enrollment Percentage');
```
## plot:
<img width="1455" height="735" alt="image" src="https://github.com/user-attachments/assets/ef9fd4d2-b538-44bb-9b27-9b417c701dc3" />


