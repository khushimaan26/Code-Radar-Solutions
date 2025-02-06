#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    // Taking input for three integers
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Calculating the average
    double average = (num1 + num2 + num3) / 3.0;
    
    // Printing the average with 2 decimal places
    printf("Average: %.2f\n", average);
    
    return 0;
}