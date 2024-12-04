#include <stdio.h>
#include <string.h>

typedef struct cat{

    char bookname[50];
    char author[50];
    int edton_num;
    float price;

}catalog;

int main() {

    catalog book1 = {.bookname = "A perfect name", .author = "john", .edton_num = 7823, .price = 2500 };

    printf("bookname: %s\nauthor: %s\nedition number: %d\nprice: $%f", 
    book1.bookname, book1.author, book1.edton_num, book1.price);
    
    return 0;
}