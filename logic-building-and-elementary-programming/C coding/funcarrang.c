#include <stdio.h>
#include <string.h>

void findletter(char name[], char letter) {
    int present = 0;

    for (int i = 0; i < strlen(name); ++i) {
        if (letter == name[i]) {
            printf("%c occurs in %s\n", letter, name);
            present = 1;
            break;
        }
    }

    if (present != 1) {
        printf("%c does not occur in %s\n", letter, name);
    }
}

int main() {
    char name[50];
    char letter;

    printf("Enter a letter: \n");
    scanf("%c", &letter);

    printf("Enter your name: \n");
    scanf("%s", name);


    findletter(name, letter);

    return 0;
}
