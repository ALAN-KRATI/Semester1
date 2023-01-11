#include<stdio.h>
int main()
{int l1=20,b1=30,h1=10,a1;
a1=l1*b1*h1;
printf("length of the wall is:%d",l1);
printf("\nbreadth of the wall is:%d",b1);
printf("\nheight of the wall is:%d",h1);
printf("\narea of the wall is:%d",a1);
int l2=2,b2=3,h2=1,a2,total_bricks;
a2=l2*b2*h2;
printf("\nlength of the brick is:%d",l2);
printf("\nbreadth of the brick is:%d",b2);
printf("\nheight of the brick is:%d",h2);
printf("\narea of the brick is:%d",a2);
total_bricks=a1/a2;
printf("\ntotal number of bricks in the wall :%d",total_bricks);
return 0;
}
