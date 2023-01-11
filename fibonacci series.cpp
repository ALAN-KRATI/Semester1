#include<stdio.h>
int main()
{
	int t1=0,t2=1,t3,i,n;
	
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("\n fibonacci series is : %d %d",t1,t2);
	
	
	for(i=2;i<=n;++i)
	{
		t3=t1+t2;
		printf(" %d ",t3);
		t1=t2;
		t2=t3;
	}
}
