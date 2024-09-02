// Opeators in C
#include <stdio.h>

int main() {
    int a = 9, b= 5;
    
    // Arithmetic Operataors
    printf("Arithmetic Operataors\n");
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, (a/b));
    printf("%d %% %d = %d\n\n", a, b, a%b);
    
    // Relational Operators
    printf("Relational Operataors\n");
    printf("%d < %d = %d\n", a, b, a<b);
    printf("%d > %d = %d\n", a, b, a>b);
    printf("%d == %d = %d\n", a, b, a==b);
    printf("%d != %d = %d\n\n", a, b, a!=b);

    // Logical Operators
    printf("Logical Operataors\n");
    printf("AND %d && %d = %d\n", a, b, a && b);
    printf("OR %d || %d = %d\n", a, b, a || b);
    printf("NOT %d = %d\n\n", a, !a);
    
    // Bitwise Operators
    printf("Bitwise Operataors\n");
    printf("%d & %d = %d\n", a, b, a&b);
    printf("%d | %d = %d\n", a, b, a|b);
    printf("Bitwise XOR %d ^ %d = %d\n", a, b, a^b);
    printf("Left Shift %d << 2 = %d\n", a, a<<2);
    printf("Right Shift %d >> 2 = %d\n", a, a>>2);
    
    return 0;
}


/* Output

Arithmetic Operataors
9 + 5 = 14
9 - 5 = 4
9 * 5 = 45
9 / 5 = 1
9 % 5 = 4

Relational Operataors
9 < 5 = 0
9 > 5 = 1
9 == 5 = 0
9 != 5 = 1

Logical Operataors
AND 9 && 5 = 1
OR 9 || 5 = 1
NOT 9 = 0

Bitwise Operataors
9 & 5 = 1
9 | 5 = 13
Bitwise XOR 9 ^ 5 = 12
Left Shift 9 << 2 = 36
Right Shift 9 >> 2 = 2

  */
