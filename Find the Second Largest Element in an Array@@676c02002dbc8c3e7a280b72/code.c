#include <stdio.h>
#include <limits.h>

int main() {
    int N, i, largest, second_largest;

    // Read the number of elements
    scanf("%d", &N);

    // Edge case: If N is less than 2, second largest doesn't exist
    if (N < 2) {
        printf("-1\n");
        return 0;
    }

    int arr[N];

    // Read the array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    largest = second_largest = INT_MIN;

    // Find the largest and second largest numbers
    for (i = 0; i < N; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    // If second largest is still INT_MIN, it means no second largest exists
    if (second_largest == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", second_largest);
    }

    return 0;
}
