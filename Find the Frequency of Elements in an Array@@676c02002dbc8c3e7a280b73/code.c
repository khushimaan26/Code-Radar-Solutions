#include <stdio.h>

int main() {
    int N, i, j, count;
    
    // Read the number of elements
    scanf("%d", &N);
    
    int arr[N], visited[N];

    // Read the array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize all elements as not counted
    }

    // Count the frequency of each unique element
    for (i = 0; i < N; i++) {
        if (visited[i] == 1) {
            continue; // Skip if already counted
        }

        count = 1;
        for (j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark as counted
            }
        }

        // Print the unique element with its frequency
        printf("%d %d\n", arr[i], count);
    }

    return 0;
}
