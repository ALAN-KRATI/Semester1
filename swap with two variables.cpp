#include<stdio.h>
int main()
{int a,b;
printf("enter a value of a:");
scanf("%d",&a);
printf("enter a value of b:");
scanf("%d",&b);
printf("values before the swap of a=%d and b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("values after the swap of a=%d and b=%d",a,b);
return 0;
}
