#include "pathfinder.h"

int main (int argc, char *argv[]) {
    t_matrix *mtr  = (t_matrix *)malloc(sizeof(t_matrix));
    t_island *isl = (t_island *)malloc(sizeof(t_matrix));
    t_output *otp = (t_output *)malloc(sizeof(t_output));
    int i = 0;
    int j = 0;

    check_error(argc, argv, isl);
    matrix_init(mtr, isl);
    matrix_fill(mtr, isl);
    algorithm_warshall(otp, mtr, isl);
    output_all(otp, mtr, isl, i, j);
    if (isl->all_info)
        free_sarr(&isl->all_info);
    if (isl->islands)
        free_sarr(&isl->islands);  
    free_malloc(otp, isl, mtr);
    return 0;
}
