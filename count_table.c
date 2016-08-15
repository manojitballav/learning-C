/*Program to print tables*/
#include<stdio.h>
int main(){
	int n,i,l;
	printf("Enter the number whose table is to be printed : ");
	scanf("%d",&n);
	printf("Enter the limit to be printed to : ");
	scanf("%d",&l);
	for(i = 1;i <= l; i++){
		printf("%d x %d = %d\n",n,i,n*i);
	}
	return 0;
}
