#include<stdio.h>
int main()
{
		int n,i,sum=0;
		printf("Enter the value of n :");
		scanf("%d",&n);
		
		int a[n];
		for(i=0;i<n;i++)
		{
		scanf("%d \n",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	    	sum+=a[i];
		}
	    printf("sum of all the elements in an array is : %d",sum);
}
