#include <stdio.h>


int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; 
        }

        else if (arr[mid] < target) {
            low = mid + 1;
        }
        
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[100];
    int size, target, result;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &size);

    printf("Enter %d sorted integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
