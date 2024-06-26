/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:17:30 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/25 18:20:01 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int length_i(char const *s1, char const *set, size_t i)
{
	while (s1[i])
	{
		if (s1[i] == set[0])
			break ;
		i++;
	}
	return (i);
}
char *mal_func(char const *s1, char const *set)
{	
	char *rem;
	if (!s1 || !set)
		return (NULL);
	rem = (char *)malloc(sizeof(char) * (ft_strlen(s1)));
	if (!rem)
		return (NULL);
	return (rem);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		j;
	size_t		k;
	size_t		l;
	char		*rem;

	rem = mal_func(s1,set);
	l = 0;
	k = length_i(s1, set, l);
	while (s1[k])
	{
		if (s1[k] == set[(ft_strlen(set) - 1)])
			break ;
		k++;
	}
	l = 0;
	while (l < (k - 1))
	{
		rem[l] = s1[l];
		l++;
	}
	j = 0;
	k++;
	while (s1[k])
		rem[l + j++] = s1[k++];
	return (rem);
}


// int main()
// {
// 	char *s1 = "Hello World There";
// 	char *s2 = " W";
// 	char *s3 = ft_strtrim(s1,s2);

// 	printf("%s\n",s3);
// }
