#include <stddef.h>
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t size)
{
    size_t i;
    size_t j;
    size_t k;

    i = 0;
    j = 0;
    k = ft_strlen(needle) - 1;
    
    if(haystack == NULL || needle == NULL)
    {
        return NULL;
    }
    
    if(size > 0)
    {
        while(haystack[i] && i < size)
        {   
            if(haystack[i] == needle[j])
            {
                if(j == k)
                {
                    return (char *)(haystack + (i - j));
                    break;
                }
                j++;
            }
            i++;
        }
    }
    
    return (NULL);
}

