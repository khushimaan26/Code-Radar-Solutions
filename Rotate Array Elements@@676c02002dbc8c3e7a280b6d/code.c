#include <stdio.h>
#include <stdlib.h>

void rotateArray(int *arr, int n, int k) {
    k = k % n;
    if (k < 0) {
        k = k + n;
    }
    int *temp = (int *)malloc(k * sizeof(int));
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
    free(temp);
}

int main() {
    int n, k;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    rotateArray(arr, n, k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}