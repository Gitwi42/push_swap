/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 11:49:48 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/08 12:44:05 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static	void	ft_freeerror(char **dest, size_t nb)
{
	size_t	i;

	i = 0;
	while (i < nb)
	{
		free(dest[i]);
		i++;
	}
	free(dest);
}

static int	ft_getwordstart(char const *s, char c, size_t nb)
{
	int		start;
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	start = -1;
	while (start == -1 && s[i])
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			count++;
		if (count == nb)
			start = i;
		i++;
	}
	return (start);
}

static char	*ft_getwordfromstring(char const *s, char c, size_t nb)
{
	size_t	i;
	int		start;
	char	*word;

	i = 0;
	i = ft_getwordstart(s, c, nb);
	start = i;
	while (s[i] != c && s[i])
		i++;
	word = malloc(sizeof (char) * (i - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[start] != c && s[start])
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	wordnb;
	char	**dest;

	wordnb = ft_wordcount(s, c);
	dest = malloc(sizeof (char *) * (wordnb + 1));
	if (!dest)
		return (NULL);
	i = 1;
	while (i <= wordnb)
	{
		dest[i - 1] = ft_getwordfromstring(s, c, i);
		if (dest[i - 1] == 0)
		{
			ft_freeerror(dest, i - 1);
			return (NULL);
		}
		i++;
	}
	dest[i - 1] = NULL;
	return (dest);
}
