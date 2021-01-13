#include "pathfinder.h"

static void free_matrix(long **arr, int numb) {
    if (arr) {
        for (int i = 0; i < numb; i++)
            free(arr[i]);
        free(arr);
    }
}

void free_malloc(t_output *otp, t_island *isl, t_matrix *mtr) {
    
    if (mtr->dup_matrix)
        free_matrix(mtr->dup_matrix, isl->numb_of_islands);
    if (mtr->matrix)
        free_matrix(mtr->matrix, isl->numb_of_islands);
    if (otp)
        free(otp);
    if (isl)
        free(isl);
    if (mtr)
        free(mtr);
}
