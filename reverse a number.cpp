#include<stdio.h>
int main ()
{
	int remainder,sum=0,n;
	printf(" Enter the number : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		remainder=n%10;
		sum=sum*10+remainder;
		n=n/10;
	}
	
	printf(" reverse of the given number is : %d",sum);
	
}
