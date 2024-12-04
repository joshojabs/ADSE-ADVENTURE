#include <stdio.h>

int* findproduct(int* num1, int* num2, int* product){
    
    *product = *num1 * *num2;
    
    return product;
}

int main(){
    
   
    int number1 = 32;
    int number2 = 18;
    int product;
    int* result = findproduct(&number1, &number2, &product);
    
    printf("Product is %d", *result);
  
    return 0;
}
