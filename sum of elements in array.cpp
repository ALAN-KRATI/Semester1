#include<stdio.h>
int main()
{	int n,i;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n],sum=0;
	printf("Enter the elements of array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	
	printf("\nSum of all the elemnts of array is : %d",sum);
	
	return 0;
}
