/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 19:47:02 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/09 12:33:19 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*dest;

	dest = (char *)str;
	i = 0;
	while (dest[i])
	{
		if ((unsigned char)dest[i] == (unsigned char)c)
			return (&dest[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&dest[i]);
	return (0);
}
