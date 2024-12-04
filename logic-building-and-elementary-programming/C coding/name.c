#include <stdio.h>
#include <string.h>

int main() {

    char city1[50] = "Nigeria";
    char city2[50] = "Egypt";
    char letter = 'a';
    char *loc;

    loc = strchr(city1, letter);
    if (loc != NULL) {
        printf("%c occurs in %s\n", letter, city1);
    } 
    else {
         printf("%c doesnt occur in %s\n", letter, city2);
    }

    loc = strchr(city2, letter);
    if (loc != NULL) {
        printf("%c occurs in %s\n", letter, city2); 
    } 
    else {
        printf("%c doesnt occur in %s\n", letter, city2);
    }

    return 0;
}
