#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct stack_node
{
    int value;
    int i;
	int midvalue;
    struct stack_node *next;
    struct stack_node *prev;
} node;

//operations

void	pb(node **a_stack, node **b_stack);
void	pa(node **b_stack, node **a_stack);
void	rra(node **stack1);
void	rrb(node **stack2);
void	ra(node **stack1);
void	rb(node **stack2);
void	rr(node **stack1, node **stack2);
void	sa(node **a_stack);
void	sb(node **b_stack);
void	ss(node **a_stack, node **b_stack);

void sort_3(int *stack);


#endif