#include<stdio.h>
int main()
{
	int n,num1,num2,max;
	printf(" number-1 :");
	scanf("%d",&num1);
	printf(" number-2 :");
	scanf("%d",&num2);
	
	max=(num1>num2)?num1:num2;
	
	while(1)
	{
		if((max%num1==0)&&(max%num2==0))
	{   printf(" The LCM of the given two numbers is : %d",max);
		break;
	}
		++max;
	}

}
