//Write a program that calculates the sum of all the elements in array using pointers.
#include<stdio.h>
int sumofall(int *aPtr,int i){
	int sum = 0;
	for(int j=0;j<i;j++){
		sum += *(aPtr+j); //1043
	}
	return sum;
}
int main(){
	int a[5]={1,2,3,4,5};
	int answer = sumofall(a,5);
	printf("%d",answer);
}