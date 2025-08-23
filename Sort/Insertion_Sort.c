#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, temp, j;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

int main() {
    int arr[100];
    int size;
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: \n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, size);

    printf("Sorted array: \n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
