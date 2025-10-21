#include <stdio.h>

#define DEBUG 1
static inline int square(int x) { 
    return x * x; 
}

int main() {
    int n = 5;

    #if DEBUG
        printf("Debug Mode: ON\n");
    #endif

    printf("Square of %d is %d\n", n, square(n));

    #ifdef DEBUG
        printf("Program executed successfully.\n");
    #endif
    
    return 0;
}