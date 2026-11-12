/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 03:04:45 by mhinojos          #+#    #+#             */
/*   Updated: 2026/11/12 01:58:11 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef enum e_algo
{
	ALGO_ADAPTIVE,
	ALGO_SIMPLE,
	ALGO_MEDIUM,
	ALGO_COMPLEX,
}	t_algo;

typedef struct s_config
{
	t_algo	algo;
	int		bench;
}	t_config;

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
void	init_config(t_config *config);
int		parse_flag(char *arg, t_config *config);
int		skip_flags(int argc, char **argv, t_config *config);
t_algo	dispatch_algo(double disorder, t_algo algo);
double	compute_disorder(t_stack *a);
int		find_min_index(t_stack *a);
void	rotate_to_top(t_push_swap *stack, int p);
void	simple_sort(t_push_swap *stack);
int		get_rank(t_stack *a, int i);
int		compute_ranks(t_stack *a);
int		int_sqrt(int n);
#endif
