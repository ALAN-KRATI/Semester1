#include<stdio.h>
int main ()
{
	int remainder,sum=0,n,original;
	printf(" Enter the number : ");
	scanf("%d",&n);
	original=n;
	
	
	while(n!=0)
	{
		remainder=n%10;
		sum=sum*10+remainder;
		n=n/10;
	}
	
	if(sum==original)
	printf("Number is a PALINDROME");
	else
	printf(" Number is not a PALINDROME");
	
}
