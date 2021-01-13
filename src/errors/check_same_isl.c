#include "pathfinder.h"

void check_same_isl(t_island *isl, int *line) {
    *line = 2;

    for (int i = 0; i <= isl->numb_of_islands - 3; i += 3) {
        if (mx_strcmp(isl->all_info[i], isl->all_info[i + 1]) == 0)
            output_invalid_line_number(line);
        (*line)++;
    }
}
