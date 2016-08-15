/*Swap without using a third variable*/
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the value of A : ");
	scanf("%d",&a);
	printf("Enter the value of B : ");
	scanf("%d",&b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Swapped values of \n A is %d \n B is %d",a,b);
	return 0;	
}
