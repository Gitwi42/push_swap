/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:13:17 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/09 12:16:13 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_newnode(void *content, void *(*f)(void *),
				void (*del)(void *))
{
	void	*newnode;
	t_list	*result;

	newnode = f(content);
	result = ft_lstnew(newnode);
	if (!result)
		del(newnode);
	return (result);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*dstemp;
	t_list	*lstemp;
	t_list	*newnode;

	if (lst == NULL)
		return (NULL);
	dest = ft_newnode(lst->content, f, del);
	if (!dest)
		return (NULL);
	dstemp = dest;
	lstemp = lst->next;
	while (lstemp)
	{
		newnode = ft_newnode(lstemp->content, f, del);
		if (!newnode)
		{
			ft_lstclear(&dest, del);
			return (NULL);
		}
		dstemp->next = newnode;
		dstemp = newnode;
		lstemp = lstemp->next;
	}
	return (dest);
}
