#include "pathfinder.h"

void print_route(t_island *isl, t_output *otp) {
	mx_printstr("Route: ");
	for (int i = 1; i <= otp->size; i++) {
		mx_printstr(isl->islands[otp->route[i]]);
		if (i < otp->size)
			mx_printstr(" -> ");
		else {
			mx_printstr("\n");
		}
	}
}
