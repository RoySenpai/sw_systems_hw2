#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "my_mat.h"

int getMinDistance(int distanceFromVert[], bool scannedVert[]) {
    int min = INFINITY, index;

    for (int vert = 0; vert < MATRIX_SIZE; ++vert)
    {
        if (scannedVert[vert] || distanceFromVert[vert] > min)
            continue;

        min = distanceFromVert[vert];
        index = vert;
    }

    return index;
}

int dijkstra_algorithm(int** m, int start, int vert_to_find) {
    int distanceFromVert[MATRIX_SIZE], counter = 0;
    bool scannedVert[MATRIX_SIZE] = { false };

    for (int i = 0; i < MATRIX_SIZE; i++)
        distanceFromVert[i] = INFINITY;

    distanceFromVert[start] = 0;

    while (++counter < MATRIX_SIZE)
    {
        int u = getMinDistance(distanceFromVert, scannedVert);

        scannedVert[u] = true;

        for (int v = 0; v < MATRIX_SIZE; v++)
        {
            if (scannedVert[v] || !m[u][v] || distanceFromVert[u] == INFINITY || (distanceFromVert[u] + m[u][v] >= distanceFromVert[v]))
                continue;

            distanceFromVert[v] = distanceFromVert[u] + m[u][v];
        }
    }

    return distanceFromVert[vert_to_find];
}

int isTherePath(int** m, int i, int j) {
    if (m[i][j])
        return true;

    int res = dijkstra_algorithm(m, i, j);

    return (res < INFINITY && res != 0);
}

int findShortestPath(int** m, int i, int j) {
    int res = dijkstra_algorithm(m, i, j);

    return ((res && res != INFINITY) ? res:-1);
}