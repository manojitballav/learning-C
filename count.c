/*Simple counting program*/
#include<stdio.h>
int main(){
	int start,end,i;
	printf("Enter the start value : ");
	scanf("%d",&start);
	printf("Enter the end value : ");
	scanf("%d",&end);
	printf("The series is as follows : \n");
	for(i=start;i <= end;i++){
		printf("%d\n",i);
	}
	return 0;	
}
