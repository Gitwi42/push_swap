/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 10:36:53 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/30 11:15:37 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_ra(t_push_swap *stack)
{
	int	temp;
	int	i;

	i = 0;
	if (stack->a.size <= 1)
		return ;
	temp = stack->a.data[0];
	while (i < stack->a.size - 1)
	{
		stack->a.data[i] = stack->a.data[i + 1];
		i++;
	}
	stack->a.data[i] = temp;
	write(1, "ra\n", 3);
}

void	ps_rb(t_push_swap *stack)
{
	int	temp;
	int	i;

	i = 0;
	if (stack->b.size <= 1)
		return ;
	temp = stack->b.data[0];
	while (i < stack->b.size - 1)
	{
		stack->b.data[i] = stack->b.data[i + 1];
		i++;
	}
	stack->b.data[i] = temp;
	write(1, "rb\n", 3);
}

void	ps_rr(t_push_swap *stack)
{
	int	temp;
	int	i;
	int	ok;

	i = 0;
	ok = 0;
	if (stack->a.size > 1)
	{
		temp = stack->a.data[0];
		while (i++ < stack->a.size - 1)
			stack->a.data[i - 1] = stack->a.data[i];
		stack->a.data[i - 1] = temp;
		ok = 1;
	}
	i = 0;
	if (stack->b.size > 1)
	{
		temp = stack->b.data[0];
		while (i++ < stack->b.size - 1)
			stack->b.data[i - 1] = stack->b.data[i];
		stack->b.data[i - 1] = temp;
		ok = 1;
	}
	if (ok == 1)
		write(1, "rr\n", 3);
}
