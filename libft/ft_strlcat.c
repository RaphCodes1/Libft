/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:05:29 by rcreer            #+#    #+#             */
/*   Updated: 2024/07/02 17:18:18 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (dstsize == 0 && dst == NULL)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (dst[i] && i < dstsize)
		i++;
	while (src[k] && (i + k + 1) < dstsize)
	{
		dst[i + k] = src[k];
		k++;
	}
	if (i < dstsize)
		dst[i + k] = '\0';
	while (src[k])
		k++;
	return (i + k);
}
