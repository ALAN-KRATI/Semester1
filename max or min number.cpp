#include<stdio.h>
int main()
{
	int max,min,n,i=1,a;
	printf("Total number of digits :");
	scanf("%d",&n);
	
	while(--n)
	{
		scanf("%d\n",&a);
		if(i==1)
		{
			min=a;
			max=a;
			i++;
		}
		else if(i>=1)
		{
			if(min>a)
			min = a;
			if(max<a)
			max=a;
		}
		
		
	}
	printf(" maximum value = %d and minimum value = %d",max,min);
}
