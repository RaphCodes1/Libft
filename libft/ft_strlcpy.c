#include "libft.h"

size_t ft_strlcpy(char *dest,const char *src, size_t size)
{
    size_t i;

    i = 0;
    if(size > 0)
    {
        while(src[i] && (i < size))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    while(dest[i])
        i++;
    return (i);
}