# Block Color

### Figure 1
```c
%color
cmap = [1 1 1; 0 0 0];  
image_matrix = randi([0, 1], 50, 50);
reversed_matrix = 1 - image_matrix;

figure;
subplot(1, 2, 1);
imshow (image_matrix);
colormap(cmap);
title('Original Image');

subplot(1, 2, 2);
imshow (reversed_matrix);
title('Reversed Image');
colormap(cmap);
mean_value = mean(image_matrix(:));
fprintf('Overall mean of the matrix elements: %.2f\n', mean_value);
```
### plot:
<img width="832" height="735" alt="image" src="https://github.com/user-attachments/assets/50f42c4d-23db-4c4e-a330-b13803be3c75" />


### Figure 2
```c
n = input('n=');  % n

colors = rand(n,3);  

img = zeros(n, n);
for j = 1:n
    for i =1:n
        img(i,j) =j; 
    end
end
image(img);
colormap(colors);
```
### plot:
```c
n=30
```
<img width="836" height="743" alt="image" src="https://github.com/user-attachments/assets/70b07739-b469-4e53-b5fc-576f3d80a94c" />


### Figure 3
```c
%color
mycolor=[0 1 0;
         1 0 0];
colormap(mycolor)
img = ones( 3, 3);
img(2,3)=1
img(2,3)=2
image(img)
```
### plot:
<img width="828" height="735" alt="image" src="https://github.com/user-attachments/assets/f21a2bcc-2174-44aa-9b34-490f3a38d18c" />


### Figure 4
```c
%color
mycolor=[0 1 0;
         0 0 1;
         1 0 1;
         1 1 0];
colormap(mycolor)
img = ones( 3, 3);
vec1=1:4
img = [vec1;
       fliplr(vec1)];
image(img); 
```
### plot:
<img width="840" height="739" alt="image" src="https://github.com/user-attachments/assets/ae3d8924-d35a-4e92-9f1c-576879cc7894" />


### Figure 5
```c
%mat
mat=ones(1,3)
mat(1,1,1)=255
mat(1,2,2)=255
mat(1,3,3)=255
mat=uint8(mat)
image(mat)
```
### plot:
<img width="834" height="745" alt="image" src="https://github.com/user-attachments/assets/6c089ed1-0e9e-4086-9ed1-d3f043aab1a9" />


### Figure 6
```c
%color
img = ones( 25, 25,3);
img(:,:,1)=255
img(:,:,2)=255
img(:,:,3)=255
img(10:15,10:15,1)=255
img(10:15,10:15,3)=255
img(10:15,10:15,2)=0
img(12:13,12:13,3)=255
img(12:13,12:13,1)=0
img(12:13,12:13,2)=0
img=uint8(img)
image(img); 
```
### plot:
<img width="833" height="734" alt="image" src="https://github.com/user-attachments/assets/1467c2a8-7e61-458b-9800-773598362a7f" />










