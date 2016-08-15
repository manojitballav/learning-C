/*to find a given number is positive or negative*/
#include<stdio.h>
int main(){
	int n;
	printf("Enter a number which has to be checked : ");
	scanf("%d",&n);
	if(n > 0){
		printf("Entered number %d is positive",n);
	}
	else if(n < 0){
		printf("Entered number %d is negative",n);
	}
	else if(n == 0){
		printf("Entered number %d is zero",n);
	}
	else {
		printf("Error");
	}
	return 0;
}
