# Block Color

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
## plot:
<img width="828" height="735" alt="image" src="https://github.com/user-attachments/assets/f21a2bcc-2174-44aa-9b34-490f3a38d18c" />

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
## plot:
<img width="840" height="739" alt="image" src="https://github.com/user-attachments/assets/ae3d8924-d35a-4e92-9f1c-576879cc7894" />
