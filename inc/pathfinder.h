#pragma once

#include "libmx.h"

#define INT_MAX 2147483647

typedef struct t_island {
    char **all_info;
    char **islands;
    int numb_of_words;
    int numb_of_islands;
    int numb;
    long full_dist;
} t_island;

typedef struct t_matrix {
    long **matrix;
    long **dup_matrix;
} t_matrix;

typedef struct t_output {
    int size;
    int *route;
} t_output;

void convert_to_str(t_island *isl, char *str);
void islands_numb(t_island *isl);
void matrix_init(t_matrix *mtr, t_island *isl);
void matrix_fill(t_matrix *mtr, t_island *isl);
int index_of_isl(char *island, t_island *isl);
void algorithm_warshall(t_output *otp, t_matrix *mtr, t_island *isl);
void dup_start_matrix(t_matrix *mtr, t_island *isl);
void output_all(t_output *otp, t_matrix *mtr, t_island *isl, int i, int j);
void create_route(t_island *isl, t_output *otp, int i, int j);
void check_and_print(t_island *isl, t_matrix *mtr, t_output *otp);
void print_route(t_island *isl, t_output *otp);
void print_distance(t_matrix *mtr, t_output *otp);
void print_path(t_island *isl, t_output *out);
void free_malloc(t_output *otp, t_island *isl, t_matrix *mtr);
void free_sarr(char ***arr);
void check_error(int argc,char *argv[], t_island *isl);
void check_argc(int argc);
void check_exist(char *str);
void check_empty(char *argv);
int check_fline(char *str, int *line, t_island *isl);
void output_invalid_line_number(int *line_count);
void check_islands(t_island *isl);
void check_same_isl(t_island *isl, int *line);
void check_dup_bridges(t_island *isl);
void check_bridges_lengths(t_island *isl);
void check_allines(int *line, char *str);
void mx_printerr(const char *s);
void two_isl(t_island *isl, int *line);
