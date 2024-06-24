#include "libft.h"

int ft_lstsize(t_list *lst)
{   
    int i;
    t_list *node;

    i = 0;
    node = lst;
    if(!lst)
        return(0);

    while(node != NULL)
    {
        node = node->next;
        ++i;
    }
    return (i);
}