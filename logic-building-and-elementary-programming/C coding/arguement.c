#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char number[50];
    float amount;
} structIntCal;

void intcal(structIntCal abc);

int main() {
    structIntCal investment;

    printf("Enter your name: \n");
    fgets(investment.name, sizeof(investment.name), stdin);

    printf("Enter your phone number: \n");
    scanf("%s", investment.number);

    printf("Enter the amount invested: \n");
    scanf("%f", &investment.amount);

    intcal(investment);
    return 0;
}

void intcal(structIntCal abc) {
    float rate, time, SI;

    printf("Enter the interest rate (in percentage): \n");
    scanf("%f", &rate);

    printf("Enter the time (in years): \n");
    scanf("%f", &time);

    SI = (abc.amount * rate * time) / 100;

    printf("\nName: %s", abc.name);
    printf("Phone Number: %s\n", abc.number);
    printf("Amount Invested: %.2f\n", abc.amount);
    printf("Simple Interest (SI): %.2f\n", SI);
}
