#include<stdio.h>
int main()
{	int n,i;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n],m,pos,ele;
	printf("Enter m:");
	scanf("%d",&m);
	
	printf("Enter the elements of array :");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("elements of array are here:\n");
	for(i=0;i<m;i++)
	{
		printf("%d\t",a[i]);
	}
	
		
	printf("\nenter the position where you want to delete the element:");
	scanf("%d",&pos);
	
	for(i=pos;i<m-1;i++)
	{
		a[i]=a[i+1];
	}
	m--;

	
	for(i=0;i<m;i++)
	{
		printf("%d\t",a[i]);
	}
}
