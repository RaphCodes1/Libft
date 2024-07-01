/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:52:17 by rcreer            #+#    #+#             */
/*   Updated: 2024/07/01 15:35:27 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}
// int main()
// {
// 	char *s1 = "hello";
// 	s1 = malloc((ft_strlen(s1) + 1));
// 	strcpy(s1,"world");
// 	printf("%lu\n",sizeof(s1));
// 	char s2[20];
// 	char *s3 = ft_memcpy(s2,s1,sizeof(s1));

// 	printf("%lu\n",sizeof(s2));
// 	printf("%s\n",s3);
// }
