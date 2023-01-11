#include<stdio.h>
int main()
{	int n,i;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n],b[n];
	printf("Enter the elements of array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("elements of first array are as follows :\n ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	
	printf("\nDuplicate copy of first matrix is as follows :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
	
}
