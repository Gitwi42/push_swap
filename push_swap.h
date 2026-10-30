/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 03:04:45 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/30 11:15:00 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int	*data;
	int	size;
}	t_stack;

typedef struct s_push_swap
{
	t_stack	a;
	t_stack	b;
}	t_push_swap;

void	ps_sa(t_push_swap *stack);
void	ps_sb(t_push_swap *stack);
void	ps_ss(t_push_swap *stack);
void	ps_pa(t_push_swap *stack);
void	ps_pb(t_push_swap *stack);
void	ps_ra(t_push_swap *stack);
void	ps_rb(t_push_swap *stack);
void	ps_rr(t_push_swap *stack);
void	ps_rra(t_push_swap *stack);
void	ps_rrb(t_push_swap *stack);
void	ps_rrr(t_push_swap *stack);

#endif