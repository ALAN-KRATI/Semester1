#include<stdio.h>
int main()
{
	int i,n,original,remainder,sum=0;
	
	printf(" Enter the number : ");
	scanf("%d",&n);
	original=n;
	
	for(i=1;i<=(n-1);i++)
	{
	remainder= n%i;
	if(remainder==0)
	{
	sum=sum+i;
	}	
	}
	if(sum==original)
	printf("perfect number");
	else
	printf("not a perfect number");
}
