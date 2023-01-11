#include<stdio.h>
int main(){
	float marks;
	printf("Enter marks : ");
	scanf("%f",&marks);
	while(marks>100)	
	{
		printf("Enter marks again : ");
		scanf("%f",&marks);
	}
	return 0;
}


