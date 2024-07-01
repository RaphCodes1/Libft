/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:17:30 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/28 17:21:21 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1,char const *set)
{
	size_t i;
	size_t j;
	char *res;
	
	res = 0;
	if(s1 != 0 && set != 0)
	{	
		i = 0;
		j = ft_strlen(s1);
		while(s1[i] && ft_strchr(set,s1[i]))
			i++;
		while(s1[j - 1] && ft_strchr(set,s1[j - 1]) && j > i)
			j--;
		res = malloc(j - i + 1);
		if(res == NULL)
			return (NULL);
		ft_strlcpy(res,&s1[i],j - i + 1); 
	}
	return(res);
}

// int main()
// {
// 	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !";
//  	char *s2 = "hello there";
//  	char *ret = ft_strtrim(s1, " \n\t");
// 	char *ret2 = ft_strtrim(s2, "reh");
// 	char *s3 = ft_strtrim("","");

// 	printf("%s\n",ret);
// }
