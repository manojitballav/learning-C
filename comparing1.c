/*Comparing two numbers*/
#include<stdio.h>
int main(){
	int a, b;
	printf("Enter the value of A : ");
	scanf("%d",&a);
	printf("Enter the value of B : ");
	scanf("%d",&b);
	if(a>b){
		printf("A is greater");
	}
	else{
		printf("B might be equal to or greater than A");
	}
	return 0;
}

