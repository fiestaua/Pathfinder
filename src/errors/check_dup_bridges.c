#include "pathfinder.h"

void check_dup_bridges(t_island *isl) {
    for (int i = 0; i <= isl->numb_of_words - 3; i += 3)
        for (int j = i + 3; j <= isl->numb_of_words - 3; j += 3)
            if ((mx_strcmp(isl->all_info[i], isl->all_info[j]) == 0) &&
                (mx_strcmp(isl->all_info[i + 1], isl->all_info[j + 1]) == 0)) {
                    mx_printerr("error: duplicate bridges\n");
                    exit(1);
            }
            else if ((mx_strcmp(isl->all_info[i], isl->all_info[j + 1]) == 0) &&
                (mx_strcmp(isl->all_info[i + 1], isl->all_info[j]) == 0)) {
                    mx_printerr("error: duplicate bridges\n");
                    exit(1);
            }
}
