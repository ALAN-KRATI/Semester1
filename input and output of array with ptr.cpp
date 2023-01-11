#include<stdio.h>
int main()
{
	int n,i,a[20];
	printf("Enter the size of the array :");
	scanf("%d",&n);
	
	int *ptr;
	ptr=a;
	
	printf("Input the elements of array :");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr);
		ptr++;
	}
	
	ptr=a;
	printf("Elements of array are:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",*ptr);
		ptr++;
	}
}
