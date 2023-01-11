#include<stdio.h>
int prime(int , int);
int main()
{
	int l,high;
	printf("Enter the starting limit of the interval :");
	scanf("%d",&l);
	printf("Enter the ending limit of the interval :");
	scanf("%d",&high);
	prime(l , high);
	printf("Prime numbers between %d and %d are :\n",l,high);
	
}

int prime(int l , int high )
{
	int i,flag;
	while(l<high)
	{
		int flag=0;
		if(l<=1)
		l++;
		continue;
		
		for(i=0;i<=l/2;i++)
		{
			if(l%2==0)
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("\t%d",l);
	l++;
}

