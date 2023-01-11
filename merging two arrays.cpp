#include<stdio.h>
int main()
{
	int n,m,o,i;
	
	printf("enter the size of first array:");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The elements of first array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	
	printf("\nenter the size of second array:");
	scanf("%d",&m);
	int b[n],c[o];
	printf("Enter the elements:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("The elements of secondt array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	o=m+n;
	printf("\nElements after merging:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<m;i++)
	{
		printf("%d\t",b[i]);
	}
	
	
}
