#include <stdio.h>

// Look-up table for sno to name conversion
const char *sno_to_name[] = {
    "MAHIMA DARSHAN KODALI", "V RITHIKA SANGARESWARI", "KODAMATI SASIDHAR REDDY", "KODURU HARSHITHA", "SASHANK SHARMA", "SIDDHI AGRAWAL","J GOWRI SANKAR", "SRIHARI" };

// Function to get name representation of a Sno using table look-up
const char* getSnoName(int sno) {
    if (sno >= 0 && sno <= 7) {
        return sno_to_name[sno];
    } else 
        return "Invalid digit!";
}

int main() {
    int sno;

    // Ask user for a digit between 0 and 7
    printf("Enter a Sno (0 to 7): ");
    scanf("%d", &sno);

    // Get Name representation using table look-up
    const char *SnoName = getSnoName(sno);
    printf("The Sno %d is '%s'.\n", sno, SnoName);

    return 0;
}

/* Output
/tmp/iv4jC3IBsY.o
Enter a Sno (0 to 7): 9
The Sno 9 is 'Invalid digit!'.
=== Code Execution Successful ===

/tmp/0AZXHN39mF.o
Enter a Sno (0 to 7): 2
The Sno 2 is 'KODAMATI SASIDHAR REDDY'.
=== Code Execution Successful ===
*/

