#include "pathfinder.h"

void check_islands(t_island *isl) {
    islands_numb(isl);
    if (isl->numb_of_islands == 1 && isl->numb == 0)
        exit(0);
    if (isl->numb_of_islands != isl->numb) {
        mx_printerr("error: invalid number of islands\n");
        exit(1);
    }
}
