#include <stdio.h>
#include <stdbool.h>
#include "my_mat.h"

void getMatrixValues(int** m) {
    int i, j, ret = 0;
    printf("Please enter the matrix values:\n");

    for (i = 0; i < MATRIX_SIZE; ++i)
    {
        for (j = 0; j < MATRIX_SIZE; ++j)
        {
            ret = scanf("%d", &m[i][j]);

            if (ret == EOF)
                break;
        }
    }

    if (ret != 0)
    {
        while (i < MATRIX_SIZE)
        {
            while(j < MATRIX_SIZE)
                m[i++][j++] = 0;
        }
    }   
}

int isTherePath(int** m, int i, int j) {
    // TODO
}

int findShortestPath(int** m, int i, int j) {
    // TODO
}