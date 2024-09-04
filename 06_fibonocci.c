// Program related to Fibonacci Series

/* The Fibonacci sequence is a sequence where the next term is the sum of the previous two terms. The first two terms of the Fibonacci sequence are 0 followed by 1. */

# include <stdio.h>
int main() {
  int number_of_terms;
  // initialize first and second terms
  int fibonacci_1 = 0, fibonacci_2 = 1;

  // initialize the next term (3rd term)
  int fibonacci_3 = fibonacci_1 + fibonacci_2;

  // get no. of terms from user
  printf("Enter the number of terms (greater than 2): ");
  scanf("%d", &number_of_terms);

  // print the first two terms
  printf("Fibonacci Series: \n%d \n%d", fibonacci_1, fibonacci_2);

  // print 3rd to nth terms
  for (int i = 3; i <= number_of_terms; i++) {
    printf("\n%d", fibonacci_3);
    fibonacci_1 = fibonacci_2;
    fibonacci_2 = fibonacci_3;
    fibonacci_3 = fibonacci_1 + fibonacci_2;
  }

  return 0;
}

/* Output

/tmp/uJK4kAQksK.o
Enter the number of terms (greater than 2): 8
Fibonacci Series: 
0 
1
1
2
3
5
8
13

=== Code Execution Successful ===

*/
