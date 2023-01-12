#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int a[n],b[n];
    int *ptr=a;

    printf("Enter the elements of array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Entered elements are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }


    printf("\nAfter copying the elements in another array:\n ");
    for(i=0;i<n;i++)
    {
        b[i]=*(ptr+i);
        printf("%d\t",b[i]);
    }
}
