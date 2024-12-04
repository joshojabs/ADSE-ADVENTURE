#include <stdio.h>

int main() {
    float principal = 400000;
    float rate = 5;
    float time = 4;
    float simple_interest;

    simple_interest = (principal * rate * time) / 100;

    printf("The Simple Interest is: %.2f\n", simple_interest);

    return 0;
}
