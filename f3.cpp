#include<stdio.h>
#include<math.h>
int arm(int);
int main()
{
	int number;
	printf("enter the number to check : ");
	scanf("%d",&number);
	int original=number;
	int b=arm(number);
	if(b==1)
	printf("%d is armstrong number",number);
	else
	printf("%d is not a armstrong number",number);
	
}

int arm( int number)
{
	int sum=0,j,i=0,k,original=number;
	while(number!=0)
	{
		number=number/10;
		i++;
	}
	
	for(j=1;number!=0;j++)
	{
		k=number%10;
		sum= sum+pow(k,i);
		number=number/10;
	}
	
	if(original==sum)
	return 1;
	else 
	return 0;

}
