#include<stdio.h>
int main()
{	int n,i;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n],even=0,odd=0;
	printf("Enter the elements of array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	
	printf("The number od even elements in an array is %d\n",even);
	printf("The number of odd elements in the array are : %d",odd);
}
