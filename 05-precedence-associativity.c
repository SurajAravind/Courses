// Precenence and associativity of Operators
#include <stdio.h>

int main() {
    int a = 5, b = 2, c;
    c = a + b * 3;
    printf("Value of c = %d\n", c);
    
    c = a / b * 4;
    printf("Value of c = %d\n", c);
    
    c = 3 % b * a;
    printf("Value of c = %d\n", c);

    return 0;
}

/*
Value of c = 11
Value of c = 8
Value of c = 5
*/
