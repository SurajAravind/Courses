//Bubble Sorting of numbers
# include <stdio.h>
# define SIZE 7
int main() {
    int arr[SIZE] = {64, 34, 25, 12, 22, 11, 2};
    
    printf("Original array: \n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("Sorted array: \n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
/*OUTPUT
Original array: 
64 34 25 12 22 11 2 
Sorted array: 
2 11 12 22 25 34 64 

=== Code Execution Successful ===
*/
