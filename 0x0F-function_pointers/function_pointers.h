#ifndef FUNCTIONS_POINTERS_H
#define FUNCTIONS_POINTERS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>


/* Struct to hold operator and corresponding function */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* Function prototypes for the calculator program */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/* Function prototypes for the opcode printer program */
int print_opcodes(int argc, char *argv[]);

#endif /* FUNCTIONS_POINTERS_H */

