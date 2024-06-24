#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(!lst || !new)
        return ;
    new->next = *lst;
    *lst = new;
}

t_list *ft_lstlast(t_list *lst)
{   
    if(!lst)
        return NULL;
    while(lst->next != NULL)
    {
        lst = lst->next;
    }
    return (lst);

}
void ft_lstadd_back(t_list **lst,t_list *new)
{
    if(!new || !lst)
        return ;
    if(*lst)
    {   
        ft_lstlast(*lst)->next = new;
    }
    else
    {
        *lst = new;
    }
    
}
t_list *ft_lstnew(t_list *content)
{
    t_list *node;
    node = (t_list *)malloc(sizeof(t_list));
    if(!node)
        return NULL;
    node->content = content;
    node->next = NULL;

    return(node);
}

t_list *addcontent(void *content)
{
    t_list *node;
    node = malloc(sizeof(t_list));
    if(!node)
        return NULL;
    node->content = content;
    node->next = NULL;
    
    return(node);
}

int ft_lstsize(t_list *lst)
{   
    int i;
    t_list *node;

    i = 0;
    node = lst;
    if(!lst)
        return 0;
    while(node != NULL)
    {
        node = node->next;
        i++;
    }
    return (i);
}
void ft_delone(t_list *lst,void(*del)(void *))
{
    
    if(!del || !lst)
        return ;
    while(lst)
    {
        (*del)(lst->content);
        free(lst);
    }
    
}
void ft_lstclear(t_list **lst,void(*del)(void *))
{
    t_list *node;

    if(!*lst || !lst || !del)
        return ;
    node = *lst;
    while(lst && *lst)
    {   
        node = node->next;
        ft_delone(*lst,del);
        *lst = node;
    }

}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *node;

    if(!lst || !f)
        return ;
    node = lst;
    while(lst)
    {   
        (*f)(node->content);
        node = node->next;
        lst = node;
    }

}
void del(void *data)
{
    free(data);
}

void functiontest(void *data)
{
    printf("%s\n",(char *)(data));
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *node;

    if(!lst || !f || !del)
        return NULL;
    node = lst;

    ft_lstclear(node,del);

    while(node)
    {
        (*f)(node->content);
        node->next;
    }

    return(node);

}

int main(void)
{
    
}

// int main(void)
// {
//     t_list *node;
//     t_list *node2;
//     node = malloc(sizeof(t_list));
//     node->content = "Raphael";
//     node->next = NULL;

//     node2 = addcontent("Samantha");

//     node->next = node2;

//     ft_lstiter(node,functiontest);

// }

// int main(void)
// {
    // t_list *node;
    // t_list *t1;
    // t_list *t2;
    // t_list *t3;
    // t_list *t4;


    // node = NULL;
    // node = (t_list *)malloc(sizeof(t_list));
    // t1 = (t_list *)malloc(sizeof(t_list));
    // t2 = (t_list *)malloc(sizeof(t_list));
    // t3 = (t_list *)malloc(sizeof(t_list));
    // t4 = (t_list *)malloc(sizeof(t_list));

    // t1->content = "Raph";
    // t1->next = NULL;

    // t2->content = "Sam";
    // t2->next = NULL;

    // t3->content = "Denver";
    // t3->next = NULL;

    // t4->content = "Michael";
    // t4->next = NULL;

    // ft_lstadd_back(&node,t1);
    // ft_lstadd_back(&node,t2);
    // ft_lstadd_back(&node,t3);
    // ft_lstadd_back(&node,t4);    

    // int i = 1;
    // if(node != NULL)
    // {
    //     while(node != NULL)
    //     {
    //         printf("num: %d, %s\n",i,(char *)(node->content));
    //         node = node->next;
    //         i++;
    //     }
    // }
    // else if(node == NULL)
    // {
    //     printf("NULL\n");
    // }

    // printf("number of nodes in list: %d\n",ft_lstsize(node)); 

    // while(node != NULL)
    // {
    //     node = node->next;
    //     free(node);
    // }
    
    // t_list *node;
    // t_list *node2;

    // bruh = malloc(sizeof(t_list));
    // node = addcontent((char *)("Raphael"));
    // node2 = addcontent((char *)("Samantha"));


    // node->next = node2;

    
    // printf("number of nodes: %d\n",ft_lstsize(node));

    // while(node != NULL)
    // {
        
    //     printf("%s\n",(char *)(node->content));

    //     node = node->next;
    // }

    // ft_lstclear(&node, del);

    // printf("number of nodes: %d\n",ft_lstsize(node));

    // if(node == NULL)
    // {
        
    //     printf("cleared\n");

    // }

    
// }