#include<stdio.h>
int main()
{int age;
printf("enter your age:");
scanf("%d",&age);
if(age>18)
{float h,w;
printf("enter your weight:");
scanf("%d",&w);
printf("enter your height:");
scanf("%d",&h);
if((h>5.5) && (w>65))
{printf("You are eligible for NCC");
}
else
{printf("You are not eligible for NCC");
}
}
else
{printf("Your age is below 18");
}
return 0;
}
