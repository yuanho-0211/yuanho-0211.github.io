# Draw Tree

```c
%color
mycolor=[1 1 1;
         0 1 0;
         0 0.5 0;
         0 0 1;
         0 0 0.5;
         0.3 0 0];
colormap(mycolor)
img=ones(25,25)
img(1:3,:)=4
img(3:6,:)=5
img(15:23,12:15)=6
img(23:25,:)=3
for i =1:5
    img(9+i,14-i:13+i)=2
end
image(img)
```

## plot:
<img width="834" height="739" alt="image" src="https://github.com/user-attachments/assets/5356f6e8-7297-49d1-a888-74b8ae50ecd9" />
