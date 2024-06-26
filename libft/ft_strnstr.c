/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:12:00 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/25 18:14:37 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdio.h>

char *my_strnstr(const char *haystack, const char *needle, size_t size) {

    size_t i;
    int n_size;
    size_t k; 
    size_t j;

	n_size = ft_strlen(needle) - 1;
	j = 0;
    
	if (!haystack || !needle)
		return (NULL);
	if (size > 0)
	{
		while (haystack[j] != '\0' && ((j + n_size) < size))
    	{   
        	i = 0;
        	k = 0;
        	while (haystack[j + i] == needle[k] && needle[k] != '\0')
        	{
            	i++;
            	k++;
            	if((int)k == n_size && size > 0)
                	return((char *)&haystack[j]);   
        	}
        	j++;
    	}
	}
	return (NULL);
}


// int main() {
//     const char *haystack = "Hello world";
//     const char *needle = " wor";
//     size_t len = 30;

//     char *result = ft_strnstr(haystack, needle, len);

//     if (result) {
//         printf("Found '%s' in '%s' within the first %zu characters: '%s'\n", needle, haystack, len, result);
//     } else {
//         printf("Substring '%s' not found in '%s' within the first %zu characters.\n", needle, haystack, len);
//     }

//     printf("%ld\n",ft_strlen(needle));

//     return 0;
// }