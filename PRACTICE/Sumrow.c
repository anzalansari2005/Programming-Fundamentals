//Write a function that finds the sum of each row in a 2D array.
#include<stdio.h>
int sumrow(int r,int c,int arr[r][c]){
	for(int i = 0;i<r;i++){
		int sum = 0;
		for(int j=0;j<c;j++){
			sum+= arr[i][j];
		}
		printf("\n%d",sum);
	}
}
int main(){
	int r,c;
	printf("ENTER ROWS AND COLUMNS: ");
	scanf("%d %d",&r,&c);
	int A[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("Enter Element for A[%d][%d]: ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	sumrow(r,c,A);
}