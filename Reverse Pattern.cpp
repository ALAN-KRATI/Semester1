#include<stdio.h>
int main(){
	int i , j ,n,k,m;
	printf("Enter the number of rows to print : ");
	scanf("%d",&n);
	
	k = n/2 ;
	
	
	
	for (i = 0; i <= k; i++){
		for (j = 1; j <= k-i; j++){
			printf(" ");
		}
		for (j = 1; j <= 2*i-1; j++){
			printf("*");
		}
			printf("\n");
	}
	
	for (i = k; i>=1; i--){
		for(j = k-i; j>=1; j--){
			printf(" ");
		}
		
		for (j = 2*i -1; j>= 1; j--){
			printf("*");
			
		}
		printf("\n");
		
	}
	
}
