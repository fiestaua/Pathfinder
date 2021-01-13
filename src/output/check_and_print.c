#include "pathfinder.h"

static int check_route(t_matrix *mtr, t_output *otp, int vert) {
	int i = otp->route[otp->size];
	int j = otp->route[0];

	if (i != vert) {
		if (mtr->dup_matrix[i][vert] == mtr->matrix[j][i] -
            mtr->matrix[j][vert])
			return 1;
	}
	return 0;
}

void check_and_print(t_island *isl, t_matrix *mtr, t_output *otp) {
	if (otp->route[otp->size] == otp->route[0] && otp->size > 1) {
	    print_path(isl, otp);
        print_route(isl, otp);
	    print_distance(mtr, otp);
	    mx_printstr("\n");
	    mx_printstr("========================================\n");
	}
	else {
		for (int i = 0; i < isl->numb_of_islands; i++)
			if(check_route(mtr, otp, i)) {
				if (otp->size < isl->numb_of_islands) {
					otp->size++;
					otp->route[otp->size] = i;
				}
				check_and_print(isl, mtr, otp);
				if(otp->size > 1)
					otp->size--;
			}
	}
}
