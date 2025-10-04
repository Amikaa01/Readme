#include <stdio.h>

int main() {
    int arr[] = {2, 4, 10, 15, 18, 23, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    int low = 0, high = size - 1, mid;
    int found = 0; // flag

    printf("Enter the number to search: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d.\n", mid);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
