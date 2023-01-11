#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n],f[n],count;
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	f[i]=-1;
	}
	
	printf(" All the elements in the array are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]=a[j])
			{
				count++;
				f[j]=0;
			}
		}
		if(f[i]!=0)
		{
			f[i]=count;
		}
	}
	
	printf("\nFrequency of all the elements of array : \n");
	for(i=0;i<n;i++)
	{
		if(f[i]!=0)
		{
			printf("%d occurs %d times\n",a[i],f[i]);
		}
	}
	return 0;
}
