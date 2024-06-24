#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *node_new;

    node_new = (t_list *)malloc(sizeof(t_list));
    if(node_new == NULL)
        return NULL;
    node_new->content = content;
    node_new->next = NULL;
    return (node_new);
}