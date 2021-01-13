#include "pathfinder.h"

int index_of_isl(char *island, t_island *isl) {
    for (int i = 0; isl->islands[i]; i++)
        if (mx_strcmp(island, isl->islands[i]) == 0)
                return i;
        return 0;
}
