//WHILE LOOP Q2 REVERSE NUM
#include <stdio.h>
int main(void) {
    int n, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;             
        reversed = reversed * 10 + remainder;
        n = n / 10;                      
    }
    printf("Reversed number = %d\n", reversed);
}