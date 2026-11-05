/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 15:21:03 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/08 12:02:24 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (n == 0)
		return (count);
	if (count + 1 <= n)
	{
		while (i++ < count)
			dest[i - 1] = src[i - 1];
	}
	else
	{
		while (i++ < n - 1)
			dest[i - 1] = src[i - 1];
	}
	dest[i - 1] = '\0';
	return (count);
}
