#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("your array is as follows :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\nNegative number in the array are :\n");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		printf("%d\t",a[i]);
	}
	
	printf("\nPositive numbers in the array are :\n");
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		printf("%d\t",a[i]);
	}
}
