#include "pathfinder.h"

void convert_to_str(t_island *isl, char *str) {
    int i = 0;

    if (*str != '\0') {
        for ( ; str[i] != '\n'; i++) 
            if (mx_isdigit(str[i]))
                isl->numb = mx_atoi(str);
        str += i + 1;
        for (i = 0; str[i] != '\0'; i++)
            if (str[i] == '-' || str[i] == ',' || str[i] == '\n')
                str[i] = ' ';     
        isl->all_info = mx_strsplit(str, ' ');
        isl->numb_of_words = mx_count_words(str, ' ');
    }
}
