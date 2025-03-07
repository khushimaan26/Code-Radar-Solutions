#include <stdio.h>

int main() {
    int a, b;
    
    // Read two space-separated integers
    if (scanf("%d %d", &a, &b) != 2) {
        // Handle case when only one number is provided
        printf("True\n");
        return 0;
    }
    
    // Check if the two numbers are equal
    if (a == b) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}