/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:20:12 by rcreer            #+#    #+#             */
/*   Updated: 2024/07/02 17:15:02 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;
	size_t	slen;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (slen < start)
		len = 0;
	if (slen - start < len)
		len = slen - start;
	dest = malloc((len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while ((start < slen) && (i < len))
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
