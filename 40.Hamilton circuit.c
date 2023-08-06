#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 10

int graph[MAX_VERTICES][MAX_VERTICES];
int numVertices;
bool visited[MAX_VERTICES];
int path[MAX_VERTICES];

bool isSafe(int v, int pos) {
	int i;
    if (!graph[path[pos - 1]][v])
        return false;

    for (i = 0; i < pos; i++) {
        if (path[i] == v)
            return false;
    }

    return true;
}

bool findHamiltonianCircuit(int pos) {
	int i,v;
    if (pos == numVertices) {
        if (graph[path[pos - 1]][path[0]]) {
            printf("Hamiltonian Circuit: ");
            for (i = 0; i < numVertices; i++)
                printf("%d ", path[i]);
            printf("%d\n", path[0]);
            return true;
        }
        return false;
    }

    for (v = 1; v < numVertices; v++) {
        if (isSafe(v, pos)) {
            path[pos] = v;
            visited[v] = true;

            if (findHamiltonianCircuit(pos + 1))
                return true;

            visited[v] = false;
            path[pos] = -1;
        }
    }

    return false;
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

    for (i = 0; i < numVertices; i++) {
        visited[i] = false;
        path[i] = -1;
    }

    path[0] = 0;
    visited[0] = true;

    if (findHamiltonianCircuit(1) == false) {
        printf("No Hamiltonian Circuit exists in the given graph.\n");
    }

    return 0;
}

