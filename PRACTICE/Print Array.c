//Write a function that takes an array and prints all its elements.
#include<stdio.h>
int show1d(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
	int arr[3]={1,2,3};
	show1d(arr,3);	
}