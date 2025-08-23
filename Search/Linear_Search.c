#include <stdio.h>

int main() {
    int arr[100];
    int i,size,target;
    int found =0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ",size);

    for ( i =0;i<size;i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    for (i=0;i<size;i++) {
        if (arr[i]== target) {
            found  = 1;
            break;
        }
    }

    if (found==1) {
        printf("Element %d is found at index %d",target,i);
    }

    else {
        printf("Element %d is not found in array, target");
    }
}
