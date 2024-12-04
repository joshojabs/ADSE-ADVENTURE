#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, ^ for exponent): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Error! Division by zero.\n");
            return 1;
        }
    } else if (operator == '^') {
        result = pow(num1, num2);
    } else {
        printf("Invalid operator.\n");
        return 1;
    }

    printf("Result: %.2lf\n", result);
    return 0;
}
