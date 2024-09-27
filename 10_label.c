#include <stdio.h>
int main() {
    int number;
    input:    // Label 
    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("\nNegative number entered\n");
        goto input;
    }
    printf("You entered a valid positive number: %d\n", number);
    return 0;
}

/*
Enter a positive number: -2

Negative number entered
Enter a positive number: 8
You entered a valid positive number: 8


=== Code Execution Successful ===
*/
