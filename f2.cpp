#include<stdio.h>
int prime(int);
int main()
{
	int num;
	printf("enter the number to check : ");
	scanf("%d",&num);
	int a=prime(num);
	if(a==1)
	printf(" %d is prime number",num);
	else
	printf("%d is not a prime number",num);
	
}

int prime( int num)
{
	int i;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		return 0;
		else 
		return 1;
	}
}
