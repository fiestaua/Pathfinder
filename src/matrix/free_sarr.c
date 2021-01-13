#include "pathfinder.h"

void free_sarr(char ***arr) {
    char **del_arr = *arr;

    while (*del_arr)
        mx_strdel(del_arr++);
    free(*arr);
    *arr = NULL;
}
