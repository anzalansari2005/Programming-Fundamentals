//CALC
#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // note the space before %c to ignore newline

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (op) {
        case '+':
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 == 0)
                printf("Error: Division by zero is not allowed.\n");
            else
                printf("Result: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            break;

        case '%':
            if (num2 == 0)
                printf("Error: Modulus by zero is not allowed.\n");
            else
                printf("Result: %d %% %d = %d\n", num1, num2, num1 % num2);
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
