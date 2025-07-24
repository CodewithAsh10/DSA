#include <stdio.h>

void selection_sort(int arr[], int n) {

    int i, j;
    int minIndex;
    int temp;

    for (i = 0; i < n - 1; i++) {

        minIndex = i;

        for (j = i + 1; j < n; j++) {

            if (arr[j] < arr[minIndex]) {

                minIndex = j;
            }
        }

        if (minIndex != i) {

            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {

    int n;

    printf("Enter the size of Array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {

        scanf("%d", &arr[i]);
    }

    selection_sort(arr, n);

    printf("Sorted Array is: ");
    for (int i = 0; i < n; i++) {

        printf("%d ", arr[i]);
    }
    
    printf("\n");

    return 0;
}
