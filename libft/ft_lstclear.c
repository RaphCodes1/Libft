#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{   
    t_list *node;

    node = *lst;
    if(!del || !lst || !*lst)
        return ;
    while(lst && *lst)
    {
        node = node->next;
        ft_lstdelone(*lst,del);
        *lst = node;
    }
}