#include<stdio.h>
#include<limits.h>
int main()
{
	int n,i;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n],max,b[INT_MAX]={0};

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Elements of array are as follows:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(max>a[i])
		max=a[i];
	}
	max++;
	for(i=0;i<n;i++)
	{ 
	b[a[i]]++;
	}
	
	for(i=1;i<max;i++)
	{
		printf("%d=%d\n",i,b[i]);
	}
	return 0;
}
	
	

