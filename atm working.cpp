#include<stdio.h>
int main()
{int amt,amt1,tt,fh,th,h;
printf("enter your amount:");
scanf("%d",&amt);
amt1=amt;
tt=amt/2000;
amt=amt%2000;
fh=amt/500;
amt=amt%500;
th=amt/200;
amt=amt%200;
h=amt/100;
printf("amount=%d\n2000 notes=%d\n500 notes=%d\n200 notes=%d\n100 notes=%d",amt1,tt,fh,th,h);
return 0;
}
