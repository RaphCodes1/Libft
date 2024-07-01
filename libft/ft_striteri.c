/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:00:36 by rcreer            #+#    #+#             */
/*   Updated: 2024/07/01 15:35:59 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
// void my_func(unsigned int c, char *s)
// {
// 	*s = *s + c;
// }
// int main()
// {
// 	char s1[] = "Hello there";
// 	ft_striteri(s1,&my_func);

// 	printf("%s\n",s1);

// }
