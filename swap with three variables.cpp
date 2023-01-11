#include<stdio.h>
int main()
{int a,b,c;
printf("enter a value of a:");
scanf("%d",&a);
printf("enter a value of b:");
scanf("%d",&b);
printf("values before the swap of a=%d and b=%d",a,b);
c=a;
a=b;
b=c;
printf("values after the swap of a=%d and b=%d",a,b);
return 0;
}
