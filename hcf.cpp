#include<stdio.h>
int main()
{
	int i,num1,num2,gdc;
	printf(" Two numbers for HCF : ");
	printf(" number1 : ");
	scanf("%d",&num1);
	printf(" number2 : ");
	scanf("%d",&num2);
	
	for(i=2;i<=num1 && i<=num2;i++)
	{
		if(num1%i==0 && num2%i==0)
		break;
		gdc=i;
	}
		printf("\n the hcf of %d and %d is %d",num1,num2,i);
	
	
}
