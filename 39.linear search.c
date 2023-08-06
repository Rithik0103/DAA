#include <stdio.h>

#define MAX_SIZE 100

int main() {
	int i;
    int arr[MAX_SIZE];
    int n, searchElement;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &searchElement);

    int found = 0;
    int index = -1;

    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            found = 1;
            index = i;
            break;
        }
    }

    if (found) {
        printf("Element %d found at index %d.\n", searchElement, index);
    } else {
        printf("Element %d not found in the array.\n", searchElement);
    }

    return 0;
}

