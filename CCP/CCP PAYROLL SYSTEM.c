//CCP PAYROLL SYSTEM BY ADAM(CT-190),AREEBA(CT-158) AND ANZAl(CT-177)
#include <stdio.h>
int main() {
    int n, i;
    int empID[50], tenure[50];
    char name[50][50];
    float hourlyRate[50], hoursWorked[50], overtimeHours[50], unpaidHours[50];
    float houseAllowance[50], medicalAllowance[50], transportAllowance[50];
    float basicPay[50], overtimePay[50], allowanceTotal[50], performanceBonus[50];
    float tenureBonus[50], unpaidDeduction[50], grossPay[50], tax[50], netPay[50];
    printf("===== PAYROLL SYSTEM =====\n");
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\n--- Enter details for Employee %d ---\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &empID[i]);
        printf("Enter Employee Name: ");
        scanf(" %[^\n]", name[i]);
        printf("Enter Hourly Rate: ");
        scanf("%f", &hourlyRate[i]);
        printf("Enter Hours Worked: ");
        scanf("%f", &hoursWorked[i]);
        printf("Enter Overtime Hours: ");
        scanf("%f", &overtimeHours[i]);
        printf("Enter Unpaid Leave Hours: ");
        scanf("%f", &unpaidHours[i]);
        printf("Enter House Allowance: ");
        scanf("%f", &houseAllowance[i]);
        printf("Enter Medical Allowance: ");
        scanf("%f", &medicalAllowance[i]);
        printf("Enter Transport Allowance: ");
        scanf("%f", &transportAllowance[i]);
        printf("Enter Tenure (years of service): ");
        scanf("%d", &tenure[i]);
        // Calculations
        basicPay[i] = hoursWorked[i] * hourlyRate[i];
        overtimePay[i] = overtimeHours[i] * (hourlyRate[i] * 1.5);
        allowanceTotal[i] = houseAllowance[i] + medicalAllowance[i] + transportAllowance[i];
        performanceBonus[i] = (hoursWorked[i] > 160) ? (hoursWorked[i] - 160) * (hourlyRate[i] * 0.25) : 0;
        tenureBonus[i] = tenure[i] * (hourlyRate[i] * 10);
        unpaidDeduction[i] = unpaidHours[i] * hourlyRate[i];
        grossPay[i] = basicPay[i] + overtimePay[i] + allowanceTotal[i] + performanceBonus[i] + tenureBonus[i];
        grossPay[i] -= unpaidDeduction[i];
        tax[i] = grossPay[i] * 0.10;
        netPay[i] = grossPay[i] - tax[i];
    }
    printf("\n===== PAYROLL SUMMARY =====\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: %d\n", empID[i]);
        printf("Name: %s\n", name[i]);
        printf("Basic Pay: %.2f\n", basicPay[i]);
        printf("Overtime Pay: %.2f\n", overtimePay[i]);
        printf("Total Allowances: %.2f\n", allowanceTotal[i]);
        printf("Performance Bonus: %.2f\n", performanceBonus[i]);
        printf("Tenure Bonus: %.2f\n", tenureBonus[i]);
        printf("Unpaid Leave Deduction: %.2f\n", unpaidDeduction[i]);
        printf("Gross Pay: %.2f\n", grossPay[i]);
        printf("Tax (10%%): %.2f\n", tax[i]);
        printf("Net Pay: %.2f\n", netPay[i]);
        printf("--------------------------\n");
    }
    printf("===== END OF PAYROLL =====\n");
    return 0;
}


