#include <stdio.h>

int swap( int arr[], int a, int b) {

    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int start = low;
    int end = high;

    while (start<end) {
        while (arr[start] <= pivot && start <= high) {
            start++;
        }

        while (arr[end] > pivot && end >= low) {
            end--;
        } 

        if (start<end) {
            swap(arr,start,end);
        }
    }

    swap(arr,low,end);
    return end;
}

void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int loc = partition(arr, low, high);
        QuickSort(arr, low, loc-1);
        QuickSort(arr, loc+1, high);
    }
}

int main() {
    int arr[100];
    int size;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    QuickSort(arr, 0, size-1);

    printf("Sorted Array: \n");
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}