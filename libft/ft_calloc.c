#include "libft.h"

void *ft_calloc(size_t nmemb,size_t size)
{
    // size_t i;
    void *arr;
    // char *char_arr;
    size_t total_size;
    
    if(nmemb == 0 || size == 0)
        return (NULL);
    total_size = nmemb * size;
    arr = malloc(total_size);
    if(!arr)
        return (NULL);
    // char_arr = (char *)arr;
    // i = 0;
    // while(i < total_size)
    // {
    //     char_arr[i] = 0;
    //     i++;
    // }
    return (arr);
}