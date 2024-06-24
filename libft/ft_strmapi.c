#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    char *str;

    i = 0;
    if(!s)
        return (NULL);
    if(!(str = malloc(sizeof(char *) * (ft_strlen(s) + 1))))
        return (NULL);
    while(str[i])
    {
        str[i] = (*f)(i, str[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}