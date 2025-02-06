#include <stdio.h>

int main() {
    float radius;
    const float PI = 3.14;

    // Taking input for the radius of the circle
    scanf("%f", &radius);

    // Calculating the area of the circle
    float area = PI * radius * radius;

    // Printing the area
    printf("Area: %.2f\n", area);

    return 0;
}