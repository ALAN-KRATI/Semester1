#include<stdio.h>
int main()
{
	int n;
	printf(" Enter the value of n :");
	scanf("%d",&n);
	
	int a[n],sum=0,i;
	for(i=0;i<n;++i)
	{
	scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;++i)
	{
	if(i%2==0)
	sum+=a[i];
	}
	printf(" The sum of all even index in an array : %d",sum);
}
