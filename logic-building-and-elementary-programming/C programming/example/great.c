#include <stdio.h>

int main()
{
    int num;
    num = 1;
    printf("Even numbers from 1-25 are :\n\n");
    while(num<25)
    {
        printf("%d\n", num);
        num+=2; 
    }
    return 0;
}