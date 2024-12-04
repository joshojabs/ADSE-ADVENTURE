/*write a c program that accepts four names from users and diplays the largest*/
#include <stdio.h>
#include <string.h>

int main() {

    char names[5][30];
    char temp[30];
    int i, j;

    printf("Enter 4 names: \n");

    for(i = 0; i < 4; ++i){
        scanf("%s", names[i]);
    }

    for(i = 0; i < 4; ++i){
        for(j = 0; j < 4; ++j){
            if(strcmp(names[i], names[j]) < 0){
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }            
        }
    }

    printf("the largest name is: %s\n", names[3]);
    
   
    
    return 0;
}