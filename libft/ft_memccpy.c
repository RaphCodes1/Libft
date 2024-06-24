#include "libft.h"

void *ft_memccpy(void *dest,const void *src,int c, size_t n)
{
    size_t i;

    if(!dest)
        return (NULL);
    i = 0;
    while(i < n)
    {
        *(char *)(dest + i) = *(char *)(src + i);
        if((*(unsigned char*)(src + i) = (unsigned char)c))
            return (dest);
        i++;
    }
    return (0);
}