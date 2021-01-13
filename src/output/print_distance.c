#include "pathfinder.h"

void print_distance(t_matrix *mtr, t_output *otp) {
	int sum = 0;
	
    mx_printstr("Distance: ");
	for (int i = 1; i < otp->size; i++){
		mx_printint(mtr->dup_matrix[otp->route[i]][otp->route[i + 1]]);
		sum += mtr->dup_matrix[otp->route[i]][otp->route[i + 1]];
			if (i < otp->size - 1)
		mx_printstr(" + ");
			else if (i != 1){
		mx_printstr(" = ");
		mx_printint(sum);
		}
	}
}
