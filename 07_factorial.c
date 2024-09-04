#include <stdio.h>

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
  return 0;
}

/*OUTPUT
Enter a non-negative number: -3
Entered a negative number.  Factorial cannot be determined

Enter a non-negative number: 0
Factorial of 0 is 1

Enter a non-negative number: 5
Factorial of 5 is 120
*/
