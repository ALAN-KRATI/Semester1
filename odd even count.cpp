#include<stdio.h>
int main()
{
	int i,n,even=0,odd=0,a;
	printf(" Total count of number : ");
	    scanf("%d",&n);

	
	for(i=1;i<=n;i++)
	{
		printf(" Number-%d : ",i );
		scanf("%d",&a);
	    
		if(a%2==0)
		even++;
		else
		odd++;
	}

	printf(" The number of even digits are : %d\n ",even);
	printf(" The number of odd digits are : %d\n ",odd);
}

