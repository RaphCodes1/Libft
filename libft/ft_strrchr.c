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
#include <string.h>
char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char *res;
	
	i = 0;
	res = NULL;
	
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			res = (char *)(s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (res);
}

// int main()
// {
// 	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
//  	char *d1 = strrchr(src, 'c');
//  	char *d2 = ft_strrchr(src, 'c');
 
//  	printf("%s\n%s",d1,d2);

// }
