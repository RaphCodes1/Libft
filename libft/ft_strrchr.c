#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;

    if(!s)
        return (NULL);
    i = ft_strlen(s) - 1;

    while(i > 0)
    {
        if(s[i] == (char)c)
        {
            return((char*)(s + i));
            break;
        }
        i--;
    }
    return (NULL);
}