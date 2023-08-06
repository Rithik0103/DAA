#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Factors of %d: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

