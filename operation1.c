/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 09:08:24 by mhinojos          #+#    #+#             */
/*   Updated: 2026/11/12 01:57:45 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_sa(t_push_swap *stack)
{
	int	temp;

	if (stack->a.size < 2)
		return ;
	temp = stack->a.data[0];
	stack->a.data[0] = stack->a.data[1];
	stack->a.data[1] = temp;
	write(1, "sa\n", 3);
}

void	ps_sb(t_push_swap *stack)
{
	int	temp;

	if (stack->b.size < 2)
		return ;
	temp = stack->b.data[0];
	stack->b.data[0] = stack->b.data[1];
	stack->b.data[1] = temp;
	write(1, "sb\n", 3);
}

void	ps_ss(t_push_swap *stack)
{
	int	temp;
	int	ok;

	ok = 0;
	if (stack->a.size >= 2)
	{
		temp = stack->a.data[0];
		stack->a.data[0] = stack->a.data[1];
		stack->a.data[1] = temp;
		ok = 1;
	}
	if (stack->b.size >= 2)
	{
		temp = stack->b.data[0];
		stack->b.data[0] = stack->b.data[1];
		stack->b.data[1] = temp;
		ok = 1;
	}
	if (ok == 1)
		write(1, "ss\n", 3);
}

void	ps_pa(t_push_swap *stack)
{
	int	i;

	i = stack->a.size;
	if (stack->b.size <= 0)
		return ;
	while (i > 0)
	{
		stack->a.data[i] = stack->a.data[i - 1];
		i--;
	}
	stack->a.data[i] = stack->b.data[0];
	stack->a.size += 1;
	stack->b.size -= 1;
	i = 0;
	while (i < stack->b.size)
	{
		stack->b.data[i] = stack->b.data[i + 1];
		i++;
	}
	write(1, "pa\n", 3);
}

void	ps_pb(t_push_swap *stack)
{
	int	i;

	i = stack->b.size;
	if (stack->a.size <= 0)
		return ;
	while (i > 0)
	{
		stack->b.data[i] = stack->b.data[i - 1];
		i--;
	}
	stack->b.data[i] = stack->a.data[0];
	stack->b.size += 1;
	stack->a.size -= 1;
	i = 0;
	while (i < stack->a.size)
	{
		stack->a.data[i] = stack->a.data[i + 1];
		i++;
	}
	write(1, "pb\n", 3);
}
