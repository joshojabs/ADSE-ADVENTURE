#include<stdio.h>
int main()
{
    int x;
    printf("pls enter your value for x\n");
    scanf("%d", &x);
    if(x % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
    return 0;
}