#include <stdio.h>

int main() {
    
    static int ary[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for(int i = 0; i < 10; ++i){
        printf("i = %d  ary[i] = %d *(ary + i) = %d", i, ary[i], *(ary + 1));
        printf("&ary[i] = %p    ary + i = %p\n", &ary[i], ary + i);
    
    }

    return 0;
}