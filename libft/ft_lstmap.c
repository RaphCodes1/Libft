#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{   
    t_list *node_new;
    t_list *node_first;


    if(!lst || !f || !del)
        return (NULL);
    node_first = NULL;
    while(lst)
    {
        if(!(node_new = ft_lstnew((*f)(lst->content))))
        {
            while(node_first)
            {
                node_new = node_first->content;
                (*del)(node_first->content);
                free(node_first);
                node_first = node_new;
            }
            lst = NULL;
            return (NULL);
        }
        ft_lstadd_back(&node_first,node_new);
        lst = lst->next;
    }
    return (node_first);

}