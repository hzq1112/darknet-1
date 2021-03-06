#ifndef OPTION_LIST_H
#define OPTION_LIST_H
#include "list.h"
#include <stdbool.h>

typedef struct{
    char *key;
    char *val;
    int used;
} kvp;


int read_option(char *s, list *options);
void option_insert(list *l, char *key, char *val);
char *option_find(list *l, char *key);
char *option_find_str(list *l, char *key, char *def);
int option_find_int(list *l, char *key, int def);
int option_find_int_quiet(list *l, char *key, int def);
//
bool option_find_bool(list *l, char *key, const bool b_default);
bool option_find_bool_quiet(list *l, char *key, const bool b_default);
//
float option_find_float(list *l, char *key, float def);
float option_find_float_quiet(list *l, char *key, float def);
void option_unused(list *l);

#endif
