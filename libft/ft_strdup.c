/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 04:09:06 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/08 11:52:54 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*dest;

	len = ft_strlen(s);
	dest = malloc(len + 1);
	if (!dest)
		return (0);
	i = 0;
	while (i++ < len)
		dest[i - 1] = s[i - 1];
	dest[i - 1] = '\0';
	return (dest);
}
