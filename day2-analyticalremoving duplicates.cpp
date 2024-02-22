#include <stdio.h>
int removeDuplicates(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    int resultIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[resultIndex]) {
            resultIndex++;
            arr[resultIndex] = arr[i];
        }
    }
    return resultIndex + 1;
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newLength = removeDuplicates(arr, n);
    printf("Modified Array: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nNew Length: %d\n", newLength);

    return 0;
}

