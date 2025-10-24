#include<stdio.h> 
int main(void)
{ 
	int avg,i,sum = 0; 
	int marks[5];  
	for(i=0;i<=4;i++){ 
		printf("Enter student marks: "); 
		scanf("%d", &marks[i]); 
	} 
	for(i = 0; i<=4; i++){
		sum = sum + marks[i];
	}
		avg = sum/5; 
		printf("Average marks are:%d\n", avg); 
		printf("total marks are :%d\n", sum);
	
}