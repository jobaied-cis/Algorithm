#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    int arr[100];  // Array size can be adjusted

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear Search Logic
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;  // Exit loop once element is found
        }
    }

    // If element not found
    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
