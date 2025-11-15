//Write a function that reverses an array (without returning anything).
#include<stdio.h>
void revArr(int arr[],int size){
	int temp = 0;
	for(int i=0;i<size/2;i++){ 
		temp = arr[i];
		arr[i]=arr[size-1-i]; 
		arr[size-1-i]=temp;
	}
}
int main(){
	int A[5]={1,2,3,4,5};
	int size = 5;
	for(int j=0;j<size;j++){
		printf("%d ",A[j]);
	}
	printf("\nReversed\n");
	revArr(A,5);
	for(int i=0;i<5;i++){
		printf("%d ",A[i]);
	}
}