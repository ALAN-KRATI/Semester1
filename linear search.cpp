#include<stdio.h>
int main()
{
	int n,k;
	printf("Enter n:");
	scanf("%d",&n);
	
	int a[n],i,ele,m,f=0;
	printf("enter m :");
	scanf("%d",&m);
	
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	
	printf(" Element to search :");
	scanf("%d",&ele);
	
	for(i=0;i<m;i++)
	{
		if(a[i]=ele)
		{
			f=1;
			k=i+1;
			break;
		}
   }
	if(f==1)
	printf("element found at location : %d",k);
	else
	printf("not found");
}
