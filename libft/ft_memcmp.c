#include "libft.h"

int ft_memcmp(const void *strl, const void *strl2, size_t n)
{   

    size_t i;

    i = 0;

    while(i < n)
    {
        if(*(unsigned char*)(strl + i) != *(unsigned char*)(strl2 + i))
        {
            return (*(unsigned char*)(strl + i) - *(unsigned char*)(strl2 + i));
        }
        i++;
    }
    return (0);
}