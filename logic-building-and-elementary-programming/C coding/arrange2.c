#include <stdio.h>
#include <string.h>

int main(){

    char names[5][20];
    char temp[20];
    int i, j;

    printf("Enter 5 names: ");
    for(i = 0; i < 5; ++i){
        scanf("%s", names[i]);
    }

    for(i = 0; i < 5; ++i){
        for(j = i + 1; j < 5; ++j){
            if(names[i] < names[j]){
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
     printf("the names arranged are: \n");
    
    for(i = 0; i < 5; ++i){
        printf("%d.) %s\n", i + 1, names[i]);
    }






    return 0;
}