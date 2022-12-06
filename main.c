#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int main() {
    int i, j;
    char choice;

    // Allocate memory
    int **Matrix = (int**) malloc(MATRIX_SIZE * sizeof(int*));

    for (int i = 0; i < MATRIX_SIZE; ++i)
        Matrix[i] = (int*) malloc(MATRIX_SIZE * sizeof(int));

    do 
    {
        scanf("%c", &choice);

        switch (choice)
        {
            case 'A':
            {
                getMatrixValues(Matrix, MATRIX_SIZE);
                break;
            }

            case 'B':
            {
                scanf("%d%d", &i, &j);
                printf("%s\n", isTherePath(Matrix, i, j, MATRIX_SIZE) ? "True":"False");
                break;
            }

            case 'C':
            {
                scanf("%d%d", &i, &j);
                printf("%d\n", findShortestPath(Matrix, i, j, MATRIX_SIZE));
                break;
            }

            default:
                break;
        }
    }

    while(choice != 'D');

    // Free memory to end program
    for (int i = 0; i < MATRIX_SIZE; ++i)
        free(Matrix[i]);

    free(Matrix);

    return 0;
}