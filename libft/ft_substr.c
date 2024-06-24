#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *dest;

    if(start == 0 || len == 0)
        return (NULL);
    dest = (char *)malloc(sizeof(char) * (len + 1));
    if(!dest)
        return(NULL);
    i = 0;
    while(i < len)
    {
        dest[i] = s[(start - 1) + i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}