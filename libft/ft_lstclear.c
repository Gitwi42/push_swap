/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhinojos <mhinojos@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:45:26 by mhinojos          #+#    #+#             */
/*   Updated: 2026/10/08 12:46:16 by mhinojos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (*lst == NULL)
		return ;
	while ((*lst)->next)
	{
		current = *lst;
		*lst = (*lst)->next;
		del(current->content);
		free(current);
	}
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
}
