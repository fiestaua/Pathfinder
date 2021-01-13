#include "pathfinder.h"

void islands_numb(t_island *isl) {
    isl->islands = (char **)malloc(sizeof(char *) * isl->numb_of_words);
    isl->islands[0] = mx_strdup(isl->all_info[0]);
    isl->islands[1] = NULL;
    isl->numb_of_islands = 1;

    for (int i = 1; isl->all_info[i]; i++) {
        if(mx_isdigit(isl->all_info[i][0]))
            continue;
        for (int j = 0; isl->islands[j]; j++) {
            if (mx_strcmp(isl->all_info[i], isl->islands[j]) == 0)
                break;
            if (isl->islands[j + 1] == NULL) {
                isl->islands[j + 1] = mx_strdup(isl->all_info[i]);
                isl->islands[j + 2] = NULL;
                isl->numb_of_islands++;
            }
        }
    }
}
