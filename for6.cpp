#include<stdio.h>
int main()
{	int i,j,n;
	
	printf("Enter the number of rows for the pattern : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)

{	for(j=1;j<=n-i;j++)
	printf(" ");
	
	for(j=1;j<=2*n-i;j++)
	printf("*");
	printf("\n");
}

	return 0;
}
