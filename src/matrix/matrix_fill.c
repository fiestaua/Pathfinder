#include "pathfinder.h"

void matrix_fill(t_matrix *mtr, t_island *isl) {
    int i = 0;
    int j = 0;

    for(int index = 0; isl->all_info[index]; index += 3) {
        i = index_of_isl(isl->all_info[index], isl);
        j = index_of_isl(isl->all_info[index + 1], isl);
            
        mtr->matrix[i][j] = mx_atoi(isl->all_info[index + 2]);
        mtr->matrix[j][i] = mx_atoi(isl->all_info[index + 2]);
    }
}
