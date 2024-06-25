/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:46:57 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/25 16:50:16 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t					i;
	const unsigned char		*string;

	string = str;
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	while ((string[i] != '\0') & (i < n))
	{
		if (string[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
