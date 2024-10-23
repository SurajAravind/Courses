#include <stdio.h>

int recursive_factorial(int n) {
    if (n == 0)
      return 1;
    else
      return n * recursive_factorial(n-1);
}
int main() {
  int number, factorial_number=1;
  printf("Enter a non-negative number: ");
  scanf("%d", &number);
  if (number < 0)
     printf("Entered a negative number.  Factorial cannot be determined");
  else {
    for (int i=1; i<=number; i++)
        factorial_number *= i;
    printf("Factorial of %d is %d", number, factorial_number);      
  }
  
  printf("\nUsing recursive method Factorial of %d is %d", number, recursive_factorial(number));
  
  return 0;
}


/*OUTPUT
Enter a non-negative number: 7
Factorial of 7 is 5040
Using recursive method Factorial of 7 is 5040

Enter a non-negative number: 0
Factorial of 0 is 1
Using recursive method Factorial of 0 is 1

Enter a non-negative number: -4
Segmentation fault

The code has to be modified to check for negative number

=== Code Execution Successful ===
*/
