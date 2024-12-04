#include <stdio.h>

int sum_of_odds(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int start = (num1 < num2) ? num1 : num2;
    int end = (num1 > num2) ? num1 : num2;

    result = sum_of_odds(start, end);

    printf("Sum of odd numbers between %d and %d is: %d\n", start, end, result);

    return 0;
}
