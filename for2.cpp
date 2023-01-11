#include<stdio.h>
int main()
{	int in,j,sum=0;
	float avrg;
	
	printf("input 10 numbers from the keyboard : \n");
	for(j=1;j<=10;j++)
{
	printf("number-%d : ",j);
	scanf("%d",&in);
	sum=sum+in;
}
	
	printf("the sum of the 10 keyboard numbers : %d",sum);
	
	avrg=sum/10;
	printf("\naverage of the numbers : %.2f",avrg);
	return 0;
}
