/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:20:12 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/25 18:21:07 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;
	unsigned int s1;

	s1 = ft_strlen(s);
	if(!s)
		return (0);
	if(s1 < start)
		len = 0;
	if((s1 - start) < start)
		len = 0;
	dest = (char *)malloc(sizeof(char *) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	
	while (s[i] && (i < len))
	{
		dest[i] = s[i + start];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
// 	char *str = "01234";
//  	size_t size = 10;
//  	char *ret = ft_substr(str, 10, size);

// 	printf("%s\n",ret);

// }
