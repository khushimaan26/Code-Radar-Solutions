#include <stdio.h>

int main() {
    int N, i, even_count = 0, odd_count = 0;

    // Read the number of elements
    scanf("%d", &N);

    int arr[N];  // Declare an array of size N

    // Read the array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);

        // Check if the number is even or odd
        if (arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    // Print the counts of even and odd numbers
    printf("%d %d\n", even_count, odd_count);

    return 0;
}
