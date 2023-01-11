#include<stdio.h>
int main(){
	int i, size,j,count;
	
	printf("Enter the size for the array : ");
	scanf("%d",&size);
	
	int a[size];
	
	for(i = 0; i < size; i++){
		printf("Enter the element : ");
		scanf("%d",&a[i]);
		
	}
	
	for(i = 0; i < size-1; i++){
		for(j = i+1; j < size; j++)
			if(a[i] == a[j]){
			
			count += 1;
			a[j] = a[j+1];
			a[size-1] = 0;
		}
						
	printf("\nThe number %d occured %d times",a[i],count);
	
	count = 1;						
						
		}
		
	
}
