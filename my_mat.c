#include <stdio.h>
#include <stdbool.h>
#include "my_mat.h"

void getMatrixValues(int** m, int len) {
    for (int i = 0; i < len; ++i)
    {
        for (int j = 0; j < len; ++j)
            scanf("%d", &m[i][j]);
    }
}

int dijkstra_algorithm(int** m, int start, int vert_to_find, const int len) {
    int distanceFromVert[len], counter = 0, min, u;
    bool scannedVert[len];

    for (int i = 0; i < len; i++)
    {
        distanceFromVert[i] = INFINITY;
        scannedVert[i] = false;
    }

    distanceFromVert[start] = 0;

    while (++counter < len)
    {
        min = INFINITY;

        for (int vert = 0; vert < len; ++vert)
        {
            if (scannedVert[vert] || distanceFromVert[vert] > min)
                continue;

            min = distanceFromVert[vert];
            u = vert;
        }

        scannedVert[u] = true;

        for (int v = 0; v < len; v++)
        {
            if (scannedVert[v] || !m[u][v] || distanceFromVert[u] == INFINITY || (distanceFromVert[u] + m[u][v] >= distanceFromVert[v]))
                continue;

            distanceFromVert[v] = distanceFromVert[u] + m[u][v];
        }
    }

    return distanceFromVert[vert_to_find];
}

int isTherePath(int** m, int i, int j, int len) {
    if (m[i][j])
        return true;

    int res = dijkstra_algorithm(m, i, j, len);

    return (res < INFINITY && res != 0);
}

int findShortestPath(int** m, int i, int j, int len) {
    int res = dijkstra_algorithm(m, i, j, len);

    return ((res && res != INFINITY) ? res:-1);
}