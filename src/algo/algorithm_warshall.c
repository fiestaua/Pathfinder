#include "pathfinder.h"

void algorithm_warshall(t_output *otp, t_matrix *mtr, t_island *isl) {
    dup_start_matrix(mtr, isl);
    for(int k = 0; k < isl->numb_of_islands; k++)
        for(int i = 0; i < isl->numb_of_islands; i++)
            for(int j = 0; j < isl->numb_of_islands; j++) {
                if(mtr->matrix[i][j] > mtr->matrix[k][j] + mtr->matrix[i][k])
                    mtr->matrix[i][j] = mtr->matrix[k][j] + mtr->matrix[i][k];
            }
    for (int i = 0; i < isl->numb_of_islands; i++) 
        for (int j = 0; j < isl->numb_of_islands; j++) {
            if (i < j) {
                output_all(otp, mtr, isl, i, j);
            }
        }
}
