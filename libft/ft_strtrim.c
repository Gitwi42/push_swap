/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:36:35 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/08 11:15:13 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_checkchar(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static	int	ft_findstart(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (ft_checkchar(s1[i], set) == 1)
		i++;
	if (s1[i] == '\0')
		return (-1);
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		start;
	int		end;
	int		len;
	char	*dest;

	start = ft_findstart(s1, set);
	len = 0;
	end = 0;
	if (start != -1)
	{
		i = ft_strlen(s1) - 1;
		while (ft_checkchar(s1[i], set) == 1)
			i--;
		end = i;
		len = end - start;
	}
	dest = malloc(sizeof(char) * (len + 2));
	if (!dest)
		return (NULL);
	i = 0;
	while (start != -1 && start <= end)
		dest[i++] = s1[start++];
	dest[i] = '\0';
	return (dest);
}
