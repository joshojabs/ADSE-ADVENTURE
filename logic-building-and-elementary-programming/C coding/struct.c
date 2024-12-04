#include <stdio.h>
#include <string.h>
struct cat {
    char name[50];
    char author[15];
    int edton_num;
    float price;
};

struct issue {
    char borrower[50];
    char DB[50];
    struct cat book;
    
};

int main() {

    struct issue issl = {.borrower = "john", .DB = "nov/17/2024", 
    .book.name = "john", .book.edton_num = 6288, .book.author = "jacob", 
    .book.price = 2500};

    printf("borrower: %s\ndate borrowed: %s\nbookname: %s\nbook edition number: 
            %d\nauthor: %s\nprice: %f\n", issue.borrower, issue.DB, issue.book.name, 
            issue.book.edton_num, issue.book.author, issue.book.price);

    return 0;
}
