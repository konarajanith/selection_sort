#include <stdio.h>

void selectionSortDescending(int arr[], int n) {
    int i, j, max, temp;

    for (i = 0; i < n - 1; i++) {
        max = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[max]) {
                max = j;
            }
        }
        // Swap the found maximum element with the first element
        if (max != i) {
            temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
    }
}

int main() {
    int arr[] = {112, 25, 62, 22, 71};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSortDescending(arr, n);

    printf("Sorted array in descending order: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


