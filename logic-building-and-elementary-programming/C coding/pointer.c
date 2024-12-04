#include <stdio.h>
#include <string.h>

int main() {
   
    char animal[10];
    char bird[10];
    int length;
    int length2;
   
    printf("Pls enter a bird and an animals name: \n");
    scanf("%s", animal);
    scanf("%s", bird);
    
    length = strlen(animal);
    length2 = strlen(bird);
    
    printf("The plural forms of what you just entered are: \n");
    
    if((animal[length - 1]) != 's'){
        printf("* %ss\n", animal);
    }
    else if((animal[length - 1]) == 's' ){
        printf("* %ses\n", animal);
    }
    else{
        printf("* %s\n", animal);
    }
    
    if((bird[length2 - 1]) != 's'){
        printf("* %ss\n", bird);
    }
     else if((bird[length2 - 1]) == 's' ){
        printf("* %ses\n", bird);
    }
    else{
        printf("* %s\n", animal);
    }
   
    return 0;
}