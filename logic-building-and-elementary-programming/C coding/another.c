#include <stdio.h>
#include <string.h>

int main() {

    char names[5][30];
    char temp[30];
    int i, j;

    printf("Enter 5 names: \n");

    for(i = 0; i < 5; ++i){
        scanf("%s", names[i]);
    }

    for(i = 0; i < 5; ++i){
        for(j = 0; j < 5; ++j){
            if(strcmp(names[i], names[j]) < 0){
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }            
        }
    }

    printf("the names arranged are: \n");
    
    for(i = 0; i < 5; ++i){
        printf("%d.) %s\n", i + 1, names[i]);
    }

    
    return 0;
}