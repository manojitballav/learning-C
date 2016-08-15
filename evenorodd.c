/*to find a given number is even or odd*/
#include<stdio.h>
int main(){
	int n;
	printf("Enter a number which has to be checked : ");
	scanf("%d",&n);
	if(n%2 == 0){
		printf("Entered number %d is even",n);
	}
	else {
		printf("Entered number %d is odd",n);
	}
	return 0;
}
