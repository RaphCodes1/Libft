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
	total_size = nmemb * size;
	arr = malloc(total_size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, total_size);
	return (arr);
}

// int main(void)
// {
//     size_t num_el = 10;
// 	int *arr = ft_calloc(num_el,sizeof(int));
// 	size_t i = 0;

// 	while(i < num_el)
// 	{
// 		printf("%d ",arr[i]);
// 		i++;
// 	}

// 	free(arr);
// }
