/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:21:07 by dsteiger          #+#    #+#             */
/*   Updated: 2024/11/11 18:26:19 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void quick_sort(node **a_stack, node **b_stack)
{
	int len_a;
	int pivot;

	len_a = ft_lstsize((node *)*a_stack);
	
	pivot = len_a / 2;
	while (len_a > 3)
	{
		if (*a_stack < pivot)
			pb(a_stack, b_stack);
		
	}
	sort_3(a_stack);
}