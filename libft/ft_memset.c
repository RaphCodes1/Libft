/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:54:59 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/25 16:56:04 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
void	*ft_memset(void *b, int c, size_t len)
{	
	void *hold;
	size_t	i;

	hold = b;
	i = 0;
	while (i < len)
	{
		*(char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (hold);
}

// int main()
// {	
// 	char mem[100];
// 	if (mem != ft_memset(mem, '\n', 6))
//         write(1, "mem's adress was not returned\n", 30);
//     write(1, mem, 15);

// }
