#include "pathfinder.h"

void output_all(t_output *otp, t_matrix *mtr, t_island *isl, int i, int j) {
    if(otp == NULL)
		  exit(-1);
    create_route(isl, otp, i, j);
    check_and_print(isl, mtr, otp);
    free(otp->route);
}
