/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 08:04:22 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/09 11:52:45 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	slen;
	size_t	index;

	index = 0;
	slen = ft_strlen(s);
	if (start >= slen)
		slen = 0;
	else if ((slen - start) > len)
		slen = len;
	dest = malloc(sizeof(char) * (slen + 1));
	if (!dest)
		return (NULL);
	while (index++ < slen)
		dest[index - 1] = s[start + index - 1];
	dest[index - 1] = '\0';
	return (dest);
}
