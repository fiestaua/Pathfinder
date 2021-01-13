#include "pathfinder.h"

void matrix_init(t_matrix *mtr, t_island *isl) {
    mtr->matrix = (long **)malloc(sizeof(long *) * isl->numb_of_islands);
    for (int i = 0; i < isl->numb_of_islands; i++)
        mtr->matrix[i] = (long *)malloc(sizeof(long) * isl->numb_of_islands);
    for (int i = 0; i < isl->numb_of_islands; i++)
        for (int j = 0; j < isl->numb_of_islands; j++) {
            if (i == j)
                mtr->matrix[i][j] = 0;
            else
                mtr->matrix[i][j] = INT_MAX;
        }
}
