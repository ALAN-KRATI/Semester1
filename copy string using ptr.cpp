#include<stdio.h>
int main()
{
    char str[20], ptr[20];
    char *p=str;
    char *q=ptr;

    printf("Enter your string:");
    gets(str);

    while(*p != '\0')
    {
        *q=*p;
        p++;
        q++;
    }
    
    printf("\nAfter copying the string :\n");
    puts(ptr);
}
