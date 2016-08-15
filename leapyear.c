/*Check whether given year is a leap year or not*/
#include<stdio.h>
int main(){
	int n;
	printf("Enter the year : ");
	scanf("%d",&n);
	if((n%4==0) && (n%100!=0) || (n%400 == 0)){
		printf("Entered year %d is a leap year",n);
	}
	else {
		printf("Entered year %d is not a leap year",n);
	}
	return 0;
}
