#include<stdio.h>
int main()
{  
  int i,j, a, n;
  printf("Enter the number of rows: ");
  scanf("%d",&n);
  a=1;
  for(i=1;i<=n;i++)
  {
  	for(j=1;j<=i;j++)
  	{
  	 printf(" %d",a%2);
  	 a++;
	}
	printf("\n");
  }
}
