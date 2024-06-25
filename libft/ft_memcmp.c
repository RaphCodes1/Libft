/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:50:50 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/25 17:46:32 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *strl, const void *strl2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(strl + i) != *(unsigned char *)(strl2 + i))
		{
			return (
				*(unsigned char *)(strl + i) - *(unsigned char *)(strl2 + i));
		}
		i++;
	}
	return (0);
}
