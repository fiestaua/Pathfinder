#include "pathfinder.h"

void dup_start_matrix(t_matrix *mtr, t_island *isl) {
    mtr->dup_matrix = (long **)malloc(sizeof(long *) * isl->numb_of_islands);
    for (int i = 0; i < isl->numb_of_islands; i++)
        mtr->dup_matrix[i] = (long *)malloc(sizeof(long) * isl->numb_of_islands);
    for (int i = 0; i < isl->numb_of_islands; i++)
        for (int j = 0; j < isl->numb_of_islands; j++)
            mtr->dup_matrix[i][j] = mtr->matrix[i][j];
}
