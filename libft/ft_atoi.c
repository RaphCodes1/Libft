#include "libft.h"
#include <stdio.h>

int checker_char(const char *nptr)
{   
    int i;
    int check;

    check = 0;
    i = 0;
    while(*nptr == 32 ||(*nptr <= 13 && *nptr >= 9))
        nptr++;
    if(*nptr == '-')
    {
        check = 1;
        nptr++;
    }
    if(*nptr == '+')
        nptr++;
    while(*nptr >= '0' && *nptr <= '9')
    {
        i++;
        nptr++;
    }
    if(i > 19 && check == 1)
        return (0);
    else if (i > 19 && check == 0)
        return (-1);
    return (1);
}

int returning(int c, int conv, int value)
{
    if(value == 0)
        return (0);
    else if (value == -1)
        return (-1);
    return (c * conv);
}       

int ft_atoi(const char *nptr)
{
    int i;
    int conv;
    int c;

    if(!nptr)
        return(0);
    conv = 1;
    i = 0;
    c = 0;
    while(nptr[i] == 32 ||(nptr[i] <= 13 && nptr[i] >= 9))
        i++;
    if(nptr[i] == '-')
    {
        conv *= -1;
        i++;
    }
    if(nptr[i] == '+')
        i++;
    while(nptr[i] >= '0' && nptr[i] <= '9')
    {
        c = c * 10 + nptr[i] - '0';
        i++;
    }
    i = checker_char(nptr);
    return returning(c,conv,i);
}

int main(void)
{
    char *s1 = "        12345678901234567890";
    printf("%d\n",atoi(s1));
    printf("%d\n",ft_atoi(s1));
}