/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 03:09:28 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/09 17:29:19 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*dest;
	size_t		i;
	size_t		max_size;

	i = 0;
	max_size = (size_t)-1;
	if (size != 0 && nmemb > (max_size / size))
		return (0);
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	dest = malloc(sizeof(char) * (nmemb * size));
	if (!dest)
		return (0);
	while (i < (nmemb * size))
		dest[i++] = 0;
	return (dest);
}
