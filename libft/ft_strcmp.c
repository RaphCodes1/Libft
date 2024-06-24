#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    if(s1 == NULL ||s2 == NULL)
    {
        return NULL;
    }
    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return(s1[i] - s2[i]);
}