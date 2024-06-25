/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:42:59 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/25 16:44:09 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*node;

	i = 0;
	node = lst;
	if (!lst)
		return (0);
	while (node != NULL)
	{
		node = node->next;
		++i;
	}
	return (i);
}
