/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 07:08:31 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/08 11:12:54 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_isnegative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static long	ft_putnbtovalue(int n)
{
	long	nb;

	nb = n;
	if (ft_isnegative(nb) == 1)
		nb *= -1;
	return (nb);
}

static int	ft_countvalue(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		count++;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		count;
	char	*dest;

	nb = ft_putnbtovalue(n);
	count = ft_countvalue(nb);
	dest = malloc(sizeof (char) * (count + 1 + ft_isnegative(n)));
	if (!dest)
		return (0);
	dest[count-- + ft_isnegative(n)] = '\0';
	if (n == 0)
		dest[count] = '0';
	nb = ft_putnbtovalue(n);
	while (nb > 0)
	{
		dest[count-- + ft_isnegative(n)] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}
