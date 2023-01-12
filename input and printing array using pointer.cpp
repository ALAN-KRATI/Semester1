#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
   
    int a[n];
    int *ptr=a;

    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", (ptr+i));
    }

    printf("All the elements of array are below:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t", *(ptr+i));
    }
    
    return 0;
}
