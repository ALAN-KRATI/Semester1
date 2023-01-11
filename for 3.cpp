#include<stdio.h>
int main()
{	int i,num;

	printf(" Enter a number for the multiplication table : ");
	scanf("%d",&num);
	printf("\n");
	
	for(i=1;i<=10;i++)
	
	{printf(" %d x %d = %d\n",num,i,num*i);
	}
	
	return 0;
}
