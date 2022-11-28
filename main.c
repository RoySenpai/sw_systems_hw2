#include <stdio.h>
#include <stdbool.h>
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
                bool ans;

                scanf("%d%d", &i, &j);
                ans = isTherePath(Matrix, i, j);

                if (ans)
                    printf("True\n");

                else
                    printf("False\n");

                break;
            }

            case 'C':
            {
                int i, j, ans;

                scanf("%d%d", &i, &j);
                ans = findShortestPath(Matrix, i, j);
                printf("%d\n", ans);

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