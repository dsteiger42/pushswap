#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <limits>
#include <stdio.h>

typedef struct stack_node
{
    int value;
    int i;
    struct stack_node *next;
    struct stack_node *prev;
} node;


#endif