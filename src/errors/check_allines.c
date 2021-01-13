#include "pathfinder.h"

static void exist(int *line, char *str) {
    int i = 0;

    for (i = 0; str[i] != '\n'; i++) {
        if (str[i] == '-' && (!mx_isalpha(str[i - 1]) || !mx_isalpha(str[i + 1])))
            output_invalid_line_number(line);
    }
    for (i = 0; str[i] != '\n'; i++) {
        if (str[i] == ',' && (!mx_isalpha(str[i - 1]) || !mx_isdigit(str[i + 1])))
            output_invalid_line_number(line);
    }
}

void check_allines(int *line, char *str) {
    int i = 0;

    if (*str != '\0') {
        if (str[0] == '\n')
            output_invalid_line_number(line);
        exist(line, str);
        for (i = 0; str[i] != '-'; i++) 
            if (!mx_isalpha(str[i]))
                output_invalid_line_number(line);
        for (i += 1; str[i] != ','; i++) 
            if (!mx_isalpha(str[i]))
                output_invalid_line_number(line);
        for (i += 1; str[i] != '\n'; i++) 
            if (!mx_isdigit(str[i]))
                output_invalid_line_number(line);
    (*line) += 1;
    i += 1;
    check_allines(line, str + i);
    }
}
