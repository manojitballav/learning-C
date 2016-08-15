/*Sum of elements in an array*/
#include<stdio.h>
int sum = 0;
int get_sum(int a[],int size){
	int i;
	for(i=0;i<size;i++){
		sum+=a[i];
	}
	return sum;
}
int main(){
	int a[] ={2,4,5,2,4,1,23,4};
	int size = sizeof(a)/sizeof(a[0]);
	get_sum(a,size);
	printf("Sum is : %d",sum);
	return 0;
}
