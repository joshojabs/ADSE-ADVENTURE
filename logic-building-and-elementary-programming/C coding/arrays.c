/*write a programn that accepts a string from
 a user and prints the string in reversed order*/
#include <stdio.h>

int main(){
    
    char letters[81];
    
    printf("Enter a string: \n");
    scanf("%s", letters);
    
    for(int i = 80; i >= 0; --i){
        printf("%c", letters[i]);
    }

    

    return 0;
}