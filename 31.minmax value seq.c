#include <stdio.h>
#define MAX_SIZE 10

int main() {
    int numList[MAX_SIZE];
    int n,i;

    printf("Enter the size of the list (maximum %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numList[i]);
    }

    int minimum = numList[0];
    int maximum = numList[0];

    for (i = 1; i < n; i++) {
        if (numList[i] < minimum) {
            minimum = numList[i];
        }

        if (numList[i] > maximum) {
            maximum = numList[i];
        }
    }
    printf("Minimum value sequence: %d\n", minimum);
    printf("Maximum value sequence: %d\n", maximum);

    return 0;
}

