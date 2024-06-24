#include "libft.h"
// #include <stdio.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    const unsigned char *string;
    size_t i;

    string = str;

    if(!str)
    {
        return (NULL);
    }
    i = 0;
    while((string[i] != '\0') & (i < n))
    {
        if(string[i] == (unsigned char)c)
            return ((void *)(str + i));
        i++;
    }
    return (NULL);

}

// int main(void)
// {
//     char *s1 = "Hello World";
//     char *s2;

//     s2 = (char *)ft_memchr(s1,111,sizeof(s2));

//     printf("%s\n",s2);
// }