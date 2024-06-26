/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:56:30 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/25 17:57:51 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	// if (!s)
	// 	return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
			break ;
		}
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

// int main()
// {
// 	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
//  	char *d1 = strchr(src, 'c');
//  	char *d2 = ft_strchr(src, 'c');
 
//  	printf("%s\n%s",d1,d2);

// }
