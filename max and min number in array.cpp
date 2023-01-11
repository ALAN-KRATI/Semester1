#include<stdio.h>
int main()
{	int n,i;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n],max,min;
	printf("Enter the elements of array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max=a[0],min=a[0];
	
	for(i=1;i<n;i++)
	{
	if(max>a[i])
	max=a[i];
	if(min<a[i])
	min=a[i];
	}
	
	printf("The maximum and minimum elements in an array are %d and %d ",max,min);
}
