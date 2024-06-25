/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:23:27 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/25 14:21:21 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	total_size;

	if (size && nmemb > (SIZE_MAX / size))
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	arr = malloc(total_size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, total_size);
	return (arr);
}

// int main(void)
// {
//     int *t1;
//     // int num = 5;

//     t1 = calloc(SIZE_MAX,sizeof(int));

//     for (int i = 0; i < 30; i++)
//     {
//         printf("%d",t1[i]);
//     }
// }