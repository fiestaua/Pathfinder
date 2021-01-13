#include "pathfinder.h"

static int *init_arr(t_island *isl) {
    int *arr = (int*)malloc(sizeof(int) * isl->numb_of_islands);

	for(int i = 0; i < isl->numb_of_islands; i++)
			arr[i] = 0;
	return arr;
}

void create_route(t_island *isl, t_output *otp, int i, int j) {
    otp->route = init_arr(isl);
    otp->size = 1;
    otp->route[0] = j;
	otp->route[1] = i;
}
