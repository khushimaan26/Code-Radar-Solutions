#include <stdio.h>

int main() {
    float num1, num2, product;
    
    // Taking input
    scanf("%f %f", &num1, &num2);
    
    // Calculating product
    product = num1 * num2;
    
    // Printing product with two decimal places
    printf("Product: %.2f\n", product);
    
    return 0;
}