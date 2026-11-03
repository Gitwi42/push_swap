/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamp <lcamp@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 14:05:54 by lcamp             #+#    #+#             */
/*   Updated: 2026/11/03 01:11:57 by lcamp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_index(t_stack *a)
{
	int	i;
	int	min;

	i = 0;
	min = 0;

	while (i < size - 1)
	{
		if data[i] < data[min]
			min = data[i];
		i++;
	}
	return (min_idx);
}
