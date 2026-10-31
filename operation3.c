/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamp <lcamp@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 10:55:14 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/31 06:36:30 by lcamp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_rra(t_push_swap *stack)
{
	int	temp;
	int	i;

	i = stack->a.size - 1;
	if (stack->a.size <= 1)
		return ;
	temp = stack->a.data[i];
	while (i > 0)
	{
		stack->a.data[i] = stack->a.data[i - 1];
		i--;
	}
	stack->a.data[i] = temp;
	write(1, "rra\n", 4);
}

void	ps_rrb(t_push_swap *stack)
{
	int	temp;
	int	i;

	i = stack->b.size - 1;
	if (stack->b.size <= 1)
		return ;
	temp = stack->b.data[i];
	while (i > 0)
	{
		stack->b.data[i] = stack->b.data[i - 1];
		i--;
	}
	stack->b.data[i] = temp;
	write(1, "rrb\n", 4);
}

void	ps_rrr(t_push_swap *stack)
{
	int	temp;
	int	i;
	int	ok;

	ok = 0;
	if (stack->a.size > 1)
	{
		i = stack->a.size - 1;
		temp = stack->a.data[i];
		while (i-- > 0)
			stack->a.data[i + 1] = stack->a.data[i];
		stack->a.data[i + 1] = temp;
		ok = 1;
	}
	if (stack->b.size > 1)
	{
		i = stack->b.size - 1;
		temp = stack->b.data[i];
		while (i-- > 0)
			stack->b.data[i + 1] = stack->b.data[i];
		stack->b.data[i + 1] = temp;
		ok = 1;
	}
	if (ok == 1)
		write(1, "rrr\n", 4);
}
