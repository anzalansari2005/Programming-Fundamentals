//function to return the square of a number
#include<stdio.h>
int square(int a){
	return (a*a);
}
int main(){
	int num;
	int sq;
	printf("\n ENTER A NUMBER:");
	scanf("%d",&num);
	sq = square(num);
	printf("%d",sq);
	return 0;
}