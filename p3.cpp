#include<stdio.h>
int main()
{   int i,j,n,k;
    printf("Enter the number of rows to be printed : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
     k=i;
     for(j=1;j<=i;j++)
     {
     	printf(" %d",k);
     	k=k+5-j;
	 }
	 printf("\n");
	}
}
