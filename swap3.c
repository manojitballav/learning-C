/*Swap using a third variable*/
#include<stdio.h>
int main(){
	int a,b,x;
	printf("Enter the value of A : ");
	scanf("%d",&a);
	printf("Enter the value of B : ");
	scanf("%d",&b);
	x = a;
	a = b;
	b = x;
	printf("Swapped values of \n A is %d \n B is %d",a,b);
	return 0;	
}
