#include "pathfinder.h"

void two_isl(t_island *isl, int *line) {
    *line = 2;

    for (int i = 0; i <= isl->numb_of_words - 3; i += 3) {
        if (mx_strcmp(isl->all_info[i], isl->all_info[i + 1]) == 0)
            output_invalid_line_number(line);
        (*line)++;
    }
}
