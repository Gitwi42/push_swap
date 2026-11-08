/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamp <lcamp@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 14:05:38 by lcamp             #+#    #+#             */
/*   Updated: 2026/11/08 17:11:07 by lcamp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_rank(t_stack *a, int i)
{
	int	rank;
	int	j;

	rank = 0;
	j = 0;
	while (j < a->size)
	{
		if (a->data[j] < a->data[i])
			rank++;
		j++;
	}
	return (rank);
}

int	compute_ranks(t_stack *a)
{
	int	*ranks;
	int	i;

	ranks = malloc(sizeof(int) * a->size);
	if (!ranks)
		return (0);
	i = 0;
	while (i < a->size)
	{
		ranks[i] = get_rank(a, i);
		i++;
	}
	i = 0;
	while (i < a->size)
	{
		a->data[i] = ranks[i];
		i++;
	}
	free(ranks);
	return (1);
}

int	int_sqrt(int n)
{
	int j;

	j = 0;
	while(((j+1) * (k+1)) <= n)
		j++;
	return (j);
}
