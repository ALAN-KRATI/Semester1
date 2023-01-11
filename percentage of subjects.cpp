#include<stdio.h>
int main()
{int hindi,english,maths,science,social,sum,percentage;
printf("marks obtained in english :%d",english);
scanf("%d",&english);
printf("\nmarks obtained in hindi :%d",hindi);
scanf("%d",&hindi);
printf("\nmarks obtained in maths :%d",maths);
scanf("%d",&maths);
printf("\nmarks obtained in science :%d",science);
scanf("%d",&science);
printf("\nmarks obtained in social :%d",social);
scanf("%d",&social);
sum=hindi+english+maths+science+social;
percentage=sum/5;
printf("\nyour percentage is:%d",percentage);
return 0;
}
