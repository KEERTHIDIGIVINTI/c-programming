#include <stdio.h>
double findMedianSortedArrays(int arr1[], int arr2[], int n) {
    int mergedArray[2 * n];
    int i = 0, j = 0, k = 0;

    while (i < n && j < n) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

    while (i < n) {
        mergedArray[k++] = arr1[i++];
    }

    while (j < n) {
        mergedArray[k++] = arr2[j++];
    }

    return (mergedArray[n - 1] + mergedArray[n]) / 2.0;
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    double median = findMedianSortedArrays(arr1, arr2, n);

    printf("The median is: %.2f\n", median);

    return 0;
}

