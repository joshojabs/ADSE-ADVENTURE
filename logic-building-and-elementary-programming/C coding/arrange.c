#include <stdio.h>
#include <string.h>

int main() {
    
    char name[50];
    char letter = 'v';
    int found = 0;
    
    printf("Enter your name: ");
    scanf("%s", name);

    for(int i = 0; i < strlen(name); ++i){
        if(letter == name[i]){
            printf("%c occurs in %s\n", letter, name);
            found = 1; 
            break;
        }
    }

    if (!found) {
        printf("%c does not occur in %s\n", letter, name);
    }

    return 0;
}
