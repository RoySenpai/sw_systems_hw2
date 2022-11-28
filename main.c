#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int main() {
    char choice = 0;

    int **Matrix = (int**) malloc(MATRIX_SIZE * sizeof(int*));

    for (int i =0; i < MATRIX_SIZE; ++i)
        Matrix[i] = (int*) malloc(MATRIX_SIZE * sizeof(int));

    while(choice != 'D')
    {
        scanf("%c", &choice);

        switch (choice)
        {
            case 'A':
            {
                getMatrixValues(Matrix);
                break;
            }

            case 'B':
            {
                int i, j;
                scanf("%d%d", &i, &j);
                isTherePath(Matrix, i, j);
                break;
            }

            case 'C':
            {
                int i, j;
                scanf("%d%d", &i, &j);
                findShortestPath(Matrix, i, j);
                break;
            }

            default:
                break;
        }
    }

    for (int i = 0; i < MATRIX_SIZE; ++i)
        free(Matrix[i]);

    free(Matrix);

    return 0;
}