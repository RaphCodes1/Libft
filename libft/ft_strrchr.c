/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:15:16 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/25 18:16:34 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s) - 1;
	while (i > 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
			break ;
		}
		i--;
	}
	return (NULL);
}
