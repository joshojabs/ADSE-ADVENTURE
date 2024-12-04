#include <stdio.h>

int main() {
    int principal;           
    float rate, time;        
    float simpleInterest;    

    printf("Enter the Principal amount: ");
    scanf("%d", &principal);

    printf("Enter the Rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the Time period in years: ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("The Simple Interest is: %f\n", simpleInterest);

    return 0;
}
