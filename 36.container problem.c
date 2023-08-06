#include <stdio.h>

#define MAX_CONTAINERS 100
#define MAX_ITEMS 100

int containerCapacity[MAX_CONTAINERS];
int itemWeights[MAX_ITEMS];
int numContainers, numItems;

int main() {
	int i;
    printf("Enter the number of containers: ");
    scanf("%d", &numContainers);

    printf("Enter the capacity of each container:\n");
    for (i = 0; i < numContainers; i++) {
        scanf("%d", &containerCapacity[i]);
    }

    printf("Enter the number of items: ");
    scanf("%d", &numItems);

    printf("Enter the weight of each item:\n");
    for (i = 0; i < numItems; i++) {
        scanf("%d", &itemWeights[i]);
    }

    int containerIndex = 0;

    for (i = 0; i < numItems; i++) {
        if (containerIndex >= numContainers) {
            printf("Cannot load all items into the containers.\n");
            break;
        }

        if (itemWeights[i] <= containerCapacity[containerIndex]) {
            printf("Item %d (weight: %d) loaded into Container %d (capacity: %d)\n",
                   i + 1, itemWeights[i], containerIndex + 1, containerCapacity[containerIndex]);
            containerCapacity[containerIndex] -= itemWeights[i];
        } else {
            printf("Item %d (weight: %d) cannot fit into Container %d (capacity: %d)\n",
                   i + 1, itemWeights[i], containerIndex + 1, containerCapacity[containerIndex]);
            containerIndex++;
            i--;
        }
    }

    return 0;
}

