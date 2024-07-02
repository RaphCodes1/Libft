/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:59:58 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/25 16:01:08 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	node = *lst;
	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		node = node->next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}
