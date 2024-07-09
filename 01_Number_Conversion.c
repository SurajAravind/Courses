#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Decimal: %d\n", num);
    printf("Octal: %o\n", num);
    printf("Hexadecimal: %x\n", num);

    return 0;
}

/* Output
Enter a number: 10
Decimal: 10
Octal: 12
Hexadecimal: a
*/