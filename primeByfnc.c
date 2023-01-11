#include<stdio.h>

void prime(int a, int b){
	
	int i,j,flag;
	
	for(i = a; i <= b; i++){
		
		flag = 1;
		
		for(j = 2; j <= i/2; j++){
			
			if(i % j == 0) 
			flag = 0;
			
			
		}
		
		if(flag == 1){
			printf("%d ",i);
		}
	}
	
		
}

int main(){
	int x,y;
	printf("Enter the range to find the prime numbers : ");
	scanf("%d %d",&x,&y);
	
	prime(x,y);
}
