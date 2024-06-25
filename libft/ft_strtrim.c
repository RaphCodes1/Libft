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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	size_t		k;
	size_t		l;
	char		*rem;

	if (!s1 || !set)
		return (NULL);
	rem = (char *)malloc(sizeof(char) * (ft_strlen(s1)));
	if (!rem)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		if (s1[i] == set[0])
			break ;
		i++;
	}
	k = i;
	while (s1[k])
	{
		if (s1[k] == set[(ft_strlen(set) - 1)])
			break ;
		k++;
	}
	l = 0;
	while (l < i)
	{
		rem[l] = s1[l];
		l++;
	}
	j = 0;
	k++;
	while (s1[k])
	{
		rem[l + j] = s1[k];
		k++;
		j++;
	}
	return (rem);
}
