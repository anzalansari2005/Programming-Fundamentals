#include<stdio.h>
double roundnum(double og){
	double sliced = og * 100.0;
	long newnum = (long)(sliced+0.5);
	double round = (double)(newnum/100.0);
	printf("%.2lf ",round);
}
int main(){
	double original_num;
	double rounded_num;
	printf("Enter a number: ");
	scanf("%lf",&original_num);
	rounded_num = roundnum(original_num);
	
}