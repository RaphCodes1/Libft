/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:12:00 by rcreer            #+#    #+#             */
/*   Updated: 2024/07/02 17:14:30 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (!needle[0])
		return ((char *)haystack);
	if (!needle)
		return ((char *)haystack);
	while (haystack[j] && j < size)
	{
		i = 0;
		while (haystack[j + i] == needle[i] && needle[i] && (j + i) < size)
			i++;
		if ((needle[i] == '\0'))
			return ((char *)(haystack + j));
		j++;
	}
	return (NULL);
}
