#include <stdio.h>

int main() {
    double num1, num2, result;
    char sign;

    printf("Enter two numbers: \n");
    scanf("%lf %lf", &num1, &num2);
    printf("Enter a sign (+, -, *, /, ^): ");
    scanf(" %c", &sign);

    if (sign == '+') {
        result = num1 + num2;
    } else if (sign == '-') {
        result = num1 - num2;
    } else if (sign == '*') {
        result = num1 * num2;
    } else if (sign == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        }
    }
    else{
        printf("syntax error😒😒\n");
    }

    printf("Result: %.2lf\n", result);
    return 0;
}

