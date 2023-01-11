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
	
		
	printf("\nenter the position where you want to insert the new element:");
	scanf("%d",&pos);
	printf("and the new element: ");
	scanf("%d",&ele);
	
	for(i=m-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	m++;
	a[pos]=ele;
	
	for(i=0;i<m;i++)
	{
		printf("%d\t",a[i]);
	}
}
