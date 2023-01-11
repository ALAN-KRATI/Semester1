#include<stdio.h>
#include<math.h>
int main(){
	int n, i, j, n2,a,sum=0;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	n2 = n;
	
	a = printf("%d",n);
	
	
	while(n){
		j = n%10;
		
		sum += pow(j,a);
		
		n /= 10;
		
	}
	if (n2==sum)printf(" is an Armstrong");
	else printf("Non");
	
}
