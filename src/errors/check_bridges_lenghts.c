#include "pathfinder.h"

void check_bridges_lengths(t_island *isl) {
    isl->full_dist = 0;

    for (int i = 2; i <= isl->numb_of_words - 1; i += 3) {
        isl->full_dist += mx_atoi(isl->all_info[i]);
    }
    if (isl->full_dist > 2147483647) {
        mx_printerr("error: sum of bridges lengths is too big\n");
        exit(1);
    }
}
