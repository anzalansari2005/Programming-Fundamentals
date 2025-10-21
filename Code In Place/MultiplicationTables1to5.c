//nested while multiplication tables 1 to 5
#include <stdio.h>

int main(void){
    int i = 1;   
    int j;       
    while (i <= 5){
		j = 1;
        printf("\nMultiplication Table of %d:\n", i); 
        while (j <= 10){     
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }
        i++;
    }
}