#include "pathfinder.h"

static int check_fline_isdigit(char *str) {
    int j = 0;

    for (j = 0; str[j] != '\n'; j++) 
        if (!mx_isdigit(str[j])) {
            mx_printerr("error: line 1 is not valid\n");
            free(str);
            exit(1);
        }
    return j;
}

int check_fline(char *str, int *line, t_island *isl) {
    int int_size = 0;

    if (str[0] == '\n') {
        mx_printerr("error: line 1 is not valid\n");
        free(str);
        exit(1);
    }
    if (mx_atoi(str) == 1 && isl->all_info) {
        mx_printerr("error: invalid number of islands\n");
        free(str);
        exit(1);
    }
    int_size = check_fline_isdigit(str);
    (*line) += 1;
    return int_size + 1;
}
