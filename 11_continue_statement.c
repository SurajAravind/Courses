#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        // If the number is even, skip the rest of the loop and continue with the next iteration
        if (i % 2 == 0) 
            continue;
        
        // This will only print odd numbers
        printf("%d\n", i);
    }
    return 0;
}


/* OUtput

1
3
5
7
9

== Code Execution Successful ===  */
