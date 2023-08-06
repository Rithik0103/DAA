#include <stdio.h>
#include <stdbool.h>

#define MAX_AGENTS 100
#define INF 99999

int numAgents;
int costMatrix[MAX_AGENTS][MAX_AGENTS];
bool assigned[MAX_AGENTS];
int assignedTask[MAX_AGENTS];
int minCost = INF;

int main() {
	int i,j;
    printf("Enter the number of agents (should be equal to the number of tasks): ");
    scanf("%d", &numAgents);

    printf("Enter the cost matrix (one row at a time, separated by spaces):\n");
    for (i = 0; i < numAgents; i++) {
        for (j = 0; j < numAgents; j++) {
            scanf("%d", &costMatrix[i][j]);
        }
    }

    int minInRow[MAX_AGENTS], minInCol[MAX_AGENTS];

    for (i = 0; i < numAgents; i++) {
        minInRow[i] = INF;
        minInCol[i] = INF;
    }

    for (i = 0; i < numAgents; i++) {
        for (j = 0; j < numAgents; j++) {
            if (costMatrix[i][j] < minInRow[i])
                minInRow[i] = costMatrix[i][j];
        }
    }

    for (j = 0; j < numAgents; j++) {
        for (i = 0; i < numAgents; i++) {
            if (costMatrix[i][j] - minInRow[i] < minInCol[j])
                minInCol[j] = costMatrix[i][j] - minInRow[i];
        }
    }

    int totalReduction = 0;
    for (i= 0; i < numAgents; i++) {
        totalReduction += (minInRow[i] + minInCol[i]);
    }

    printf("Reduced Cost Matrix:\n");
    for (i = 0; i < numAgents; i++) {
        for (j = 0; j < numAgents; j++) {
            costMatrix[i][j] -= totalReduction;
            printf("%d\t", costMatrix[i][j]);
        }
        printf("\n");
    }
    printf("Initial Lower Bound = %d\n", totalReduction);

    int agent = 0;
    int currentCost = 0;

    while (true) {
        if (agent == numAgents) {
            if (currentCost < minCost) {
                minCost = currentCost;
                printf("Assignment: ");
                for (i = 0; i < numAgents; i++) {
                    printf("Agent %d -> Task %d, ", i + 1, assignedTask[i] + 1);
                }
                printf("Total Cost = %d\n", minCost);
            }
            assignedTask[agent - 1] = -1;
            agent--;
            if (agent == -1)
                break;
            assignedTask[agent]++;
            currentCost -= costMatrix[agent][assignedTask[agent]];
            continue;
        }

        assignedTask[agent] = -1;
        while (true) {
            if (assignedTask[agent] == numAgents - 1) {
                agent--;
                if (agent == -1)
                    break;
                assignedTask[agent]++;
                currentCost -= costMatrix[agent][assignedTask[agent]];
                continue;
            }

            assignedTask[agent]++;
            currentCost += costMatrix[agent][assignedTask[agent]];

            bool validAssignment = true;
            for (i = 0; i < agent; i++) {
                if (assignedTask[i] == assignedTask[agent]) {
                    validAssignment = false;
                    break;
                }
            }

            if (validAssignment)
                agent++;
            else
                currentCost -= costMatrix[agent][assignedTask[agent]];
        }
    }

    return 0;
}

