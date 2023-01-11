#include<stdio.h>
int main()
{
	int i;
	long n;
	printf(" ENTER A NUMBER : ");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		printf(" %d ",i);
	}
}
