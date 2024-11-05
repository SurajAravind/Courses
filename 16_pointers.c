# include <stdio.h>

int main() {
    int i = 5;
    printf("Value of i : %d and its address: %u", i, &i);
    
    int *ptr_i;
    ptr_i = &i;
    printf("\nValue of ptr_i : %u and value pointed by the pointer is : %d", ptr_i, *ptr_i); 

    return 0;
}

/* OUTPUT

/tmp/SYG4lcbHXg.o
Value of i : 5 and its address: 3301788596
Value of ptr_i : 3301788596 and value pointed by the pointer is : 5

=== Code Execution Successful ===
*/
