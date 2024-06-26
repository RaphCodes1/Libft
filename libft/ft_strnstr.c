/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreer <rcreer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:12:00 by rcreer            #+#    #+#             */
/*   Updated: 2024/06/26 16:17:23 by rcreer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t size) {

    size_t i;
    int n_size;
    size_t k; 
    size_t j;

	n_size = ft_strlen(needle);
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (!needle)
		return ((char *)haystack);
	while (haystack[j] && ((j + n_size) < size + 1))
    {   
        i = 0;
        k = 0;
        while (haystack[j + i] == needle[k] && needle[k] != '\0')
        {
            i++;
            k++;
            if((int)k == n_size)
                return((char *)(haystack + j));   
        }
        j++;
    }
	return (NULL);
}
// int main() {
//     const char *haystack = "Hello world";
//     const char *needle = "";
//     size_t len = 0;

//     char *result = ft_strnstr(haystack, needle, len);

//     if (result) {
//         printf("Found '%s' in '%s' within the first %zu characters: '%s'\n", needle, haystack, len, result);
//     } else {
//         printf("Substring '%s' not found in '%s' within the first %zu characters.\n", needle, haystack, len);
//     }

//     printf("%ld\n",ft_strlen(needle));

//     return 0;
// }