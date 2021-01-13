#include "pathfinder.h"

void check_error(int argc, char *argv[], t_island *isl) {
    char *temp = NULL;
    char *str = NULL;
    int line = 1;

    check_argc(argc);
    check_exist(argv[1]);
    check_empty(argv[1]);
    str = mx_file_to_str(argv[1]);
    temp = str;
    str += check_fline(str, &line, isl);
    check_allines(&line, str);
    str = temp;
    convert_to_str(isl, str);
    check_islands(isl);
    two_isl(isl, &line);
    free(str);
    check_same_isl(isl, &line);
    check_dup_bridges(isl);
    check_bridges_lengths(isl);
}
