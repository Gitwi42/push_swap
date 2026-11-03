/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamp <lcamp@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 14:05:54 by lcamp             #+#    #+#             */
/*   Updated: 2026/11/03 12:10:08 by lcamp            ###   ########.fr       */
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
