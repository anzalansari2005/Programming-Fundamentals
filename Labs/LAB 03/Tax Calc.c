//TAX  CALCULATOR
#include <stdio.h>
int main(void){
	int salary,taxRate,afterTaxSalary;
    float tax;
    printf("Tax Calculator!!!\n");
    printf("Enter the salary:");
    scanf("%d",&salary);
    printf("Enter the Tax rate:");
    scanf("%d",&taxRate);
    tax = (salary*taxRate)/100;
    printf("Your Tax is %.2f",tax);
    afterTaxSalary = salary-tax;
    printf("\nAfter tax your salary is %d",afterTaxSalary);

}