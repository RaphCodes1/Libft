/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:06:53 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/26 15:02:23 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t i;

	i = 0;
	while(*src && (i + 1) < dstsize)
	{
		*dst++ = *src++;
		++i;
	}
	if(i < dstsize)
		*dst = 0;
	while(*src++)
		++i;
	return (i);
}

// int main()
// {
// 	// char *s1 = "Hello World";
// 	char s2[50];

// 	size_t i = ft_strlcpy(s2,"aaa",3);

// 	printf("%s\n, %zu",s2,i);
	
	
	
// }
