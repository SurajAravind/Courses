# include <stdio.h>

void swap_call_by_value(int a, int b) {
    int temp;
    printf("\nBefore swapping a = %d, b=%d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping a = %d, b=%d", a, b);
}

void swap_call_by_reference(int *a, int *b) {
    int temp;
    printf("\nBefore swapping a = %d, b=%d", *a, *b);
    temp = *a;  
    *a=*b;  
    *b=temp; 
    printf("\nAfter swapping a = %d, b = %d", *a, *b);
}


int main() {
   int x = 5, y=10; 
    printf("\nBefore call by Value: x = %d, y = %d", x,y);
    swap_call_by_value(x, y);
    printf("\nAfter call by Value: x = %d, y = %d", x,y);
    
    x = 92, y=56;
    printf("\n\nBefore call by reference: x = %d, y = %d", x,y);
    swap_call_by_reference(&x, &y);
    printf("\nAfter call by reference: x = %d, y = %d", x,y);
    
    return 0;
}

/*
OUTPUT
  
/tmp/Hs5VUPNliO.o

Before call by Value: x = 5, y = 10
Before swapping a = 5, b=10
After swapping a = 10, b=5
After call by Value: x = 5, y = 10

Before call by reference: x = 92, y = 56
Before swapping a = 92, b=56
After swapping a = 56, b = 92
After call by reference: x = 56, y = 92
*/
