#include<stdio.h>
int main()
{
    int i,n,ele;
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

    printf("\nEnter element to search :");
    scanf("%d",&ele);

    int flag=0,k;
    for(i=0;i<n;i++)
    {
        if( *(ptr+i) == ele)
       { k=i+1;
        flag=1;
       }
    }
        

    if(flag==1)
    printf("Element found at %d location",k);
    else
    printf("Element not found");
}    
