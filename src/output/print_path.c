#include "pathfinder.h"

void print_path(t_island *isl, t_output *otp) {
		mx_printstr("========================================\n");
		mx_printstr("Path: ");
		mx_printstr(isl->islands[otp->route[1]]);
    	mx_printstr(" -> ");
    	mx_printstr(isl->islands[otp->route[0]]);
    	mx_printstr("\n");
}
