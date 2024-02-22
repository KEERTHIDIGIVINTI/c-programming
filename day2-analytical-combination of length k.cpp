#include <stdio.h>

void generateCombinations(int arr[], int data[], int start, int end, int index, int r);

void printCombination(int arr[], int n, int r) {
    int data[r];
    generateCombinations(arr, data, 0, n - 1, 0, r);
}

void generateCombinations(int arr[], int data[], int start, int end, int index, int r) {
    if (index == r) {
        
        for (int i = 0; i < r; i++) {
            printf("%d ", data[i]);
        }
        printf("\n");
        return;
    }

    for (int i = start; i <= end && end - i + 1 >= r - index; i++) {
        data[index] = arr[i];
        generateCombinations(arr, data, i + 1, end, index + 1, r);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, };
    int n = sizeof(arr) / sizeof(arr[0]);
    int r = 2;

    printCombination(arr, n, r);

    return 0;
}

