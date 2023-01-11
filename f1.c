#include<stdio.h>
int cube (int);
int main()
{
    int num;
    printf("Enter the number to find its cube :");
    scanf("%d",&num);
    int result=cube(num);
    printf("The cube of number %d is %d",num,result);
}

int cube (int num )
{
    int x;
    x=num*num*num;
    return x;
}