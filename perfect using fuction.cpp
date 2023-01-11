#include<stdio.h>
int per(int);
int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	int b=per(num);
	if(b==1)
	printf("%d is a perfect number",num);
	else
	printf("%d is not a perfect number",num);
}

int per( int num)
{
	int original=num,i,remainder,sum=0;
	for(i=1;i<num;i++)
	{
		remainder=num%i;
		if(remainder==0)
		sum+=i;
	}
	
	if(original==sum)
	return 1;
	else 
	return 0;
}
