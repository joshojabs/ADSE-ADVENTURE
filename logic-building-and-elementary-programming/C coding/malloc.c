#include <stdio.h>
#include <malloc.h>

int main(){

    int *p, n, i, j, temp;
    printf("\n Pls enter the number of elements you want: ");
    scanf("%d", &n);

    p = malloc(n*sizeof(int));

    for(i = 0; i < n; ++i){
        printf("Enter the %d number: ", i + 1);
        scanf("%d", p + i);
    }
    for(i = 0; i < n-1; ++i){
        printf("i is %d as it iterates" i);
        for(j = i + 1; j < n; ++j){
            printf("i is %d as it iterates" i);
            printf("j is %d as it iterates" j);
            if(*(p + 1) > *(p + j)){
                temp = * (p+i);
                *(p + i)= *( p + j );
                temp = *(p + j);
            
            }
        }
    }

    for(i = 0; i < n; ++i){
        printf("Number: %d\n", *(p + i));
    }
    return 0;

}