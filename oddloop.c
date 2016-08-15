/*Print all the odd values in a loop*/
#include<stdio.h>
int main(){
	int a, b, i;
	printf("Enter the start value of the loop : ");
	scanf("%d",&a);
	printf("Enter the end value of the loop : ");
	scanf("%d",&b);
	printf("The odd values in the loop are : \n");
	for(i=a;i<=b;i++){
		if(i%2!=0){
			printf("%d ",i);
		}
	}
	return 0;
}
