#include <stdio.h>
#include <string.h>
int main() {
  char first_name[] = "Suraj";
  char middle_name[] = "Aravind";
  char branch[10];
  printf("Length of the string %d\n", strlen(first_name));
  printf("Combine two strings %s\n", strcat(first_name, middle_name));
  strcpy(branch, "BioTech");
  printf("Branch is %s\n", branch);
    return 0;
}

/* OUTPUT
Length of the string 5
Combine two strings SurajAravind
Branch is BioTech
*/
