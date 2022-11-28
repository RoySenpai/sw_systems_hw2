#ifndef _MY_MAT_H
#define _MY_MAT_H

#define MATRIX_SIZE 10

/*
 * Get the matrix values from the use.
 * Uses byref pointer.
*/
void getMatrixValues(int**);

/*
 * Find if there is a path from i to j.
 * Uses byref pointer.
*/
int isTherePath(int**, int, int);

/*
 * Returns the shortest path from i to j.
 * Uses byref pointer.
*/
int findShortestPath(int**, int, int);

#endif