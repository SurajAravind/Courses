#include <stdio.h>
#include <complex.h>

int main() {
    // Declare complex numbers
    double complex z1 = 1.0 + 2.0*I;
    double complex z2 = 2.0 - 3.0*I;
    
    // Perform operations
    double complex sum = z1 + z2;
    double complex product = z1 * z2;
    double complex division = z1 / z2;
    
    // Print real and imaginary parts of the result
    printf("z1: %.2f + %.2fi\n", creal(z1), cimag(z1));
    printf("z2: %.2f + %.2fi\n", creal(z2), cimag(z2));
    printf("Sum: %.2f + %.2fi\n", creal(sum), cimag(sum));
    printf("Product: %.2f + %.2fi\n", creal(product), cimag(product));
    printf("Division: %.2f + %.2fi\n", creal(division), cimag(division));

    return 0;
}

/* OUTPUT
/tmp/y2KpBkJZkT.o
z1: 1.00 + 2.00i
z2: 2.00 + -3.00i
Sum: 3.00 + -1.00i
Product: 8.00 + 1.00i
Division: -0.31 + 0.54i


=== Code Execution Successful ===

What is the use of Complex numbers?
Complex numbers are widely used in various fields of science, engineering, and mathematics due to their ability to represent quantities that involve both magnitude and direction (phase).
The use of complex numbers simplifies many calculations, especially when dealing with periodic phenomena, electrical systems, and signal processing. */

