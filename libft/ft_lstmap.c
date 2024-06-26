/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:06:39 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/25 16:10:34 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node_new;
	t_list	*node_first;

	if (!lst || !f || !del)
		return (NULL);
	node_first = NULL;
	while (lst)
	{
		node_new = ft_lstnew((*f)(lst->content));
		if (!node_new)
		{
			while (node_first)
			{
				node_new = node_first->content;
				(*del)(node_first->content);
				free(node_first);
				node_first = node_new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&node_first, node_new);
		lst = lst->next;
	}
	return (node_first);
}
