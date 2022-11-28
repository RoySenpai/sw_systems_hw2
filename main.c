#include <stdio.h>
#include <stdlib.h>
#include "my_mat.h"

int main() {
    // Allocate memory
    int **Matrix = (int**) malloc(MATRIX_SIZE * sizeof(int*));

    for (int i = 0; i < MATRIX_SIZE; ++i)
        Matrix[i] = (int*) malloc(MATRIX_SIZE * sizeof(int));

    char choice;

    do 
    {
        scanf("%c", &choice);

        switch (choice)
        {
            case 'A':
            {
                for (int i = 0; i < MATRIX_SIZE; ++i)
                {
                    for (int j = 0; j < MATRIX_SIZE; ++j)
                        scanf("%d", &Matrix[i][j]);
                }

                break;
            }

            case 'B':
            {
                int i, j;
                scanf("%d%d", &i, &j);
                printf("%s\n", isTherePath(Matrix, i, j) ? "True":"False");
                break;
            }

            case 'C':
            {
                int i, j;
                scanf("%d%d", &i, &j);
                printf("%d\n", findShortestPath(Matrix, i, j));
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