#include<stdio.h>
int main()
{ int i=1,n,fact=1;
	printf(" Enter a number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	
	printf(" Factorial of the given number %d is : %d",n,fact);
}

