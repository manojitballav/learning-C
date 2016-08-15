/*Comparing three numbers*/
#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter the value of A : ");
	scanf("%d",&a);
	printf("Enter the value of B : ");
	scanf("%d",&b);
	printf("Enter the value of C : ");
	scanf("%d",&c);
	if((a>b)&&(a>c)){
		printf("A is greater");
	}
	else if((b>a)&&(b>c)){
		printf("B is greater");
	}
	else if((c>a)&&(c>b)){
		printf("C is greater");
	}
	else{
		printf("Error");
	}
	return 0;
}
