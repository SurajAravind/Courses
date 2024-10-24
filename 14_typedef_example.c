#include <stdio.h>
#include <math.h>

// Define a new type "Point" for a structure representing a 2D point
typedef struct {
    float x;
    float y;
} Point;

// Function to calculate distance between two points
float calculateDistance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    // Declare two points using the Point type
    Point point1 = {3.0, 4.0};
    Point point2 = {6.0, 8.0};

    // Calculate and display the distance between the two points
    float distance = calculateDistance(point1, point2);
    printf("Distance between points: %.2f\n", distance);

    return 0;
}


/* 
/tmp/xsWQppBApv.o
Distance between points: 5.00

=== Code Execution Successful ===
*/

