//Sorting of numbers
#include <stdio.h>
int x, y;
void swap() {
    int temporary;
    temporary = x;   x = y;  y = temporary;
}

int main() {
    int a =6,b=5,c=4,d=3;
    printf("\nBefore Sorting: a=%d, b=%d c=%d d=%d", a,b,c,d);
    if ( a > b) {  // Swap the numbers
        x = a; y = b;
        swap();
        a = x; b = y;
    }
    if ( a > c) {  // Swap the numbers
        //temporary = a;   a = c;  c = temporary;
        x = a; y = c;
        swap();
        a = x; c = y;
    }
    if ( a > d) {  // Swap the numbers
        //temporary = a;   a = d;  d = temporary;
        x = a; y = d;
        swap();
        a = x; d = y;
    }
    if ( b > c) {  // Swap the numbers
        //temporary = b;   b = c;  c = temporary;
        x = b; y = c;
        swap();
        b = x; c = y;
    }
    if ( b > d) {  // Swap the numbers
        //temporary = b;   b = d;  d = temporary;
        x = b; y = d;
        swap();
        b = x; d = y;
    }
    if ( c > d) {  // Swap the numbers
        //temporary = c;   c = d;  d = temporary;
        x = c; y = d;
        swap();
        c = x; d = y;
    }
    printf("\nAfter Sorting:  a=%d b=%d c=%d d=%d", a,b,c,d);
    return 0;
}
