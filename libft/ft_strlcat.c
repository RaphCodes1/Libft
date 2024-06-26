/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:05:29 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/26 16:53:20 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	// if (dstsize <= i)
	// {
	// 	return (src_len + dstsize);
	// }
	while (src[i] && (i < dstsize))
	{
		dst[i + src_len] = src[i];
		i++;
	}
	dst[i + src_len] = '\0';
	return (i + src_len);
}

// int main()
// {
// 	char s1[20]= "Hello ";
// 	char s2[] = "World";
// 	size_t i = ft_strlcat(s2,s1,ft_strlen(s1));

// 	printf("%zu\n",i);
// 	printf("%s\n",s2);
// }
