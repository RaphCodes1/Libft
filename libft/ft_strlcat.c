#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    j = ft_strlen(src);
    
    if(dstsize <= i)
    {
        return j + dstsize;
    }
    
    while(src[i] && (i < dstsize))
    {
        dst[i + j] = src[i];
        i++;
    }

    dst[i + j] = '\0';

    return (i + j);
}