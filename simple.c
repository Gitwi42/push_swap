/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 14:05:54 by lcamp             #+#    #+#             */
/*   Updated: 2026/11/12 01:43:28 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_index(t_stack *a)
{
	int	i;
	int	min;

	i = 1;
	min = 0;
	if (a->size <= 0)
		return (0);
	while (i < a->size)
	{
		if (a->data[i] < a->data[min])
			min = i;
		i++;
	}
	return (min);
}

void	rotate_to_top(t_push_swap *stack, int p)
{
	int	count;

	if (p <= (stack->a.size - p))
	{
		count = p;
		while (count)
		{
			ps_ra(stack);
			count--;
		}
	}
	else
	{
		count = stack->a.size - p;
		while (count)
		{
			ps_rra(stack);
			count--;
		}
	}
}

void	simple_sort(t_push_swap *stack)
{
	int	p;

	while (stack->a.size > 0)
	{
		p = find_min_index(&stack->a);
		rotate_to_top(stack, p);
		ps_pb(stack);
	}
	while (stack->b.size > 0)
		ps_pa(stack);
}
