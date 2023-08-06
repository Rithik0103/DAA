#include <stdio.h>

#define MAX_VERTICES 100

int graph[MAX_VERTICES][MAX_VERTICES];
int numVertices;
int numColors;
int colors[MAX_VERTICES];

int isSafe(int v, int color) {
	int i;
    for (i = 0; i < numVertices; i++) {
        if (graph[v][i] && colors[i] == color)
            return 0;
    }
    return 1;
}

int main() {
	int i,j;
    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &numVertices);

    printf("Enter the adjacency matrix for the graph:\n");
    for (i = 0; i < numVertices; i++) {
        for (j = 0; j < numVertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the number of colors available: ");
    scanf("%d", &numColors);

    int v = 0;

    while (v >= 0) {
        if (v == numVertices) {
            printf("Graph coloring possible using %d colors:\n", numColors);
            for (i = 0; i < numVertices; i++) {
                printf("Vertex %d -> Color %d\n", i, colors[i]);
            }
            break;
        }

        int c;
        for (c = 1; c <= numColors; c++) {
            if (isSafe(v, c)) {
                colors[v] = c;
                v++;
                break;
            }
        }

        if (c > numColors) {
            colors[v] = 0;
            v--;
        }
    }

    if (v < 0) {
        printf("Graph coloring not possible with %d colors.\n", numColors);
    }

    return 0;
}

