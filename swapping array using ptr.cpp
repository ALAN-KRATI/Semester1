#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int a[n],b[n];
    int *p=a;
    int *q=b;

    printf("Enter the elements of first array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the elements of second array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    printf("Entered elements of first array are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nEntered elements of second array are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }

    printf("\nAfter swapping the arrays :\n");

    printf("First array as:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(q+i));
    }

    printf("\nSecond array as:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
}
