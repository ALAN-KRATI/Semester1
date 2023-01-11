#include<stdio.h>
int main()
{ int n,i,k;
  k=n/2;
  printf(" Enter a number : ");
  scanf("%d",&n);
  
  for(i=2;i<=k;i++)
  {
  	if(n%i==0)
  	printf(" The number is not a PRIME NUMBER");
  }
  printf("The number is  a PRIME NUMBER");
}
