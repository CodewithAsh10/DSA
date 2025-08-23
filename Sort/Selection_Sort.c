#include <stdio.h>

void SelectionSort(int arr[], int n) {
    int i, j, small;

    for (i = 0; i < n - 1; i++) {
        small = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[small]) {
                small = j;
            }
        }

        if (small != i) {
            int temp = arr[small];
            arr[small] = arr[i];
            arr[i] = temp;
        }
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

    SelectionSort(arr, size);

    printf("Sorted array: \n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
