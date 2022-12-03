#ifndef _MY_MAT_H
#define _MY_MAT_H

#define MATRIX_SIZE 10
#define INFINITY 2147483647

/*
 * Find if there is a path from i to j.
 * Uses byref pointer.
*/
int isTherePath(int**, int, int, int);

/*
 * Returns the shortest path from i to j.
 * Uses byref pointer.
*/
int findShortestPath(int**, int, int, int);

#endif