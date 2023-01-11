#include<stdio.h>
int main()
{	int n,i;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n],max1=0,max2=0,temp=0;
	printf("Enter the elements of array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max1=a[0];
	max2=a[1];
	
	if(max1<max2)
	{
		temp=max1;
		max1=max2;
		max2=temp;
	}
	for(i=0;i<n;i++)
	{
		if(max1<a[i])
		{
		max2=max1;
		max1=a[i];
		}
		else if(a[i]>max2 && a[i]!=max1)
		{
		max2=a[i];
		}
	}
	
	printf("The second largest number in the array is : %d",max2);
	
}
	
