/*Print the reverse of a series*/
#include<stdio.h>
int main(){
	int s, e, i;
	printf("Enter the start of the series : ");
	scanf("%d",&s);
	printf("Enter the end of the series : ");
	scanf("%d",&e);
	printf("The series in reverse : \n");
	for(i=e;i>=s;i--){
		printf("%d ",i);
	}
	return 0;
}
