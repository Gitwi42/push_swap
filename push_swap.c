/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamp <lcamp@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 03:01:04 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/31 04:32:31 by lcamp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>
#include <unistd.h>

int static	checkoverflow(long nb, int next, int isnegative)
{
	long	limit;

	limit = INT_MAX;
	if (isnegative == -1)
		limit = limit + 1;
	if ((limit - next) / 10 < nb)
		return (0);
	return (1);
}

int static	fillstack(int *data, int size, char **argv)
{
	int	i;
	int	j;
	int	value;

	i = 0;
	while (i < size)
	{
		if (!satoi(argv[i + 1], &value))
			return (0);
		j = 0;
		while (j < i)
		{
			if (data[j] == value)
				return (0);
			j++;
		}
		data[i++] = value;
	}
	return (1);
}

int static	satoi(char *str, int *result)
{
	int		i;
	int		isnegative;
	long	longresult;

	i = 0;
	longresult = 0;
	isnegative = 1;
	if (!str[i] || ((str[i] == '-' || str[i] == '+') && !str[i + 1]))
		return (0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			isnegative = -1;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		if (!checkoverflow(longresult, str[i] - '0', isnegative))
			return (0);
		longresult = longresult * 10 + (str[i++] - '0');
	}
	if (str[i] && (str[i] < '0' || str[i] > '9'))
		return (0);
	(*result) = (int)(longresult * isnegative);
	return (1);
}

int	main(int argc, char **argv)
{
	t_push_swap	stack;
	t_config	config;

	if (argc < 2)
		return (0);
	init_config(&config);
	stack.a.data = malloc (sizeof (int) * (argc - 1));
	if (!stack.a.data)
		return (0);
	stack.b.data = malloc (sizeof (int) * (argc - 1));
	if (!stack.b.data)
	{
		free(stack.a.data);
		return (0);
	}
	stack.a.size = argc - 1;
	stack.b.size = 0;
	if (fillstack(stack.a.data, argc - 1, argv) == 0)
	{
		write(2, "Error\n", 6);
		free(stack.a.data);
		free(stack.b.data);
		return (0);
	}
}
