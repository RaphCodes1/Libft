/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:01:14 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/25 16:02:26 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del || !lst)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}

// void my_del(void *content)
// {
// 	free(content);
// 	// ft_bzero(content, ft_strlen(content));
// }

// int main()
// {	
// 	char s1[20] = "Hello";
// 	t_list *new = ft_lstnew(s1);
// 	printf("%s\n",(char *)new->content);
// 	ft_lstdelone(new, &my_del);
// 	printf("%s\n",(char *)new->content);
	
// }
