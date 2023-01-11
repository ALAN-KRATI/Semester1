#include<stdio.h>
int main()
{
	int i,j,remainder,n,original,sum=0;
	long fact=1;
	
	printf("Enter the number to check : ");
	scanf("%d",&n);
	
	original=n;
	
	for(n=i;n!=0;i++)
	{
		remainder=n%10;
		fact=1;
		
		for(j=1;j<=remainder;j++)
		{
		fact=fact*j;
	    }
	    sum=sum+fact;
	    n=n/10;
	}
	
	if(sum==original)
	printf("the given number %d is a strong number",original);
	
	else
	printf("the given number %d is a not strong number",original);
	
	
}
