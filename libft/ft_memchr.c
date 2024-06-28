/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:46:57 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/28 18:15:13 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t					i;
	unsigned char		*string;

	string = (unsigned char *)str;
	
	i = 0;
	while ((i < n))
	{
		if (string[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	// if ((unsigned char)c == '\0')
	// 	return ((void *)(str + i));
	return (NULL);
}
