/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:06:39 by rcreer            #+#    #+#             */
/*   Updated: 2024/07/01 15:34:09 by rcreer           ###   ########.fr       */
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
		node_new = malloc(sizeof(t_list));
		if (!node_new)
		{
			ft_lstclear(&node_first, (*del));
			return (NULL);
		}
		node_new->content = f(lst->content);
		node_new->next = NULL;
		ft_lstadd_back(&node_first, node_new);
		lst = lst->next;
	}
	return (node_first);
}
