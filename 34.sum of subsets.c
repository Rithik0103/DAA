#include <stdio.h>

#define MAX_SIZE 100

int set[MAX_SIZE];
int subset[MAX_SIZE];
int n, targetSum,i;
int count = 0;

int main() {
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    printf("Enter the elements of the set:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &set[i]);

    printf("Enter the target sum: ");
    scanf("%d", &targetSum);

    int k = 0;
    int sum = 0;

    while (k >= 0) {
        if (k == n) {
            if (sum == targetSum) {
                printf("Subset %d: {", ++count);
                for (i = 0; i < k; i++) {
                    printf("%d", subset[i]);
                    if (i < k - 1)
                        printf(", ");
                }
                printf("}\n");
            }
            k--;
            sum -= subset[k];
        } else {
            if (sum + set[k] <= targetSum) {
                subset[k] = set[k];
                sum += set[k];
                k++;
            } else {
                k--;
                sum -= subset[k];
            }
        }
    }

    return 0;
}

