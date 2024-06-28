/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:20:12 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/28 13:29:45 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;
	size_t s1;

	if(!s)
		return (0);
	s1 = ft_strlen(s);
	if(s1 < start)
		len = 0;
	if(s1 - start < len)
		len = s1 - start;
	dest = malloc((len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	
	while ((start < s1) && (i < len))
	{
		dest[i] = s[start];
		start++;
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
