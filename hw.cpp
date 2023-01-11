#include<stdio.h>
int main()
{int age;
printf("Enter your age:");
scanf("%d",&age);
if(age>18)
{printf("you are above 18 and are eligible for voting");
}
else
{printf("you are below 18 and not eligible for voting");
}
return 0;
}
