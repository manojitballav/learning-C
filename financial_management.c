#include<stdio.h>
void main(){
	float m,sum=0.00;
	int i;
	for(i=0;i<12;i++){
		scanf("%f",&m);
		sum=sum+m;
	}
	printf("%f",sum/12.0);
}
