#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}

void	*map_function(void *content)
{
	int	*new_content;

	// Example mapping: increment integer content by 1
	new_content = (int *)malloc(sizeof(int));
	if (!new_content)
		return (NULL);
	*new_content = *(int *)content + 1;
	return (new_content);
}

void	del_function(void *content)
{
	// Free the allocated content
	free(content);
}

t_list	*create_list(void)
{
	t_list	*list;
	int		*value1;
	int		*value2;
	int		*value3;

	list = NULL;
	value1 = malloc(sizeof(int));
	value2 = malloc(sizeof(int));
	value3 = malloc(sizeof(int));
	*value1 = 1;
	*value2 = 2;
	*value3 = 3;
	ft_lstadd_back(&list, ft_lstnew(value1));
	ft_lstadd_back(&list, ft_lstnew(value2));
	ft_lstadd_back(&list, ft_lstnew(value3));
	return (list);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node_new;
	t_list	*node_first;

	if (!lst || !f || !del)
		return (NULL);
	node_first = NULL;
	while (lst)
	{
		if (!(node_new = ft_lstnew((*f)(lst->content))))
		{
			while (node_first)
			{
				node_new = node_first->content;
				(*del)(node_first->content);
				free(node_first);
				node_first = node_new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&node_first, node_new);
		lst = lst->next;
	}
	return (node_first);
}

int	main(void)
{
	t_list *list = create_list();
	t_list *mapped_list;

	mapped_list = ft_lstmap(list, map_function, del_function);

	// Print and free the original list
	t_list *temp = list;
	while (temp)
	{
		printf("Original list content: %d\n", *(int *)(temp->content));
		temp = temp->next;
	}

	// Print and free the mapped list
	temp = mapped_list;
	while (temp)
	{
		printf("Mapped list content: %d\n", *(int *)(temp->content));
		t_list *next = temp->next;
		ft_lstdelone(temp, del_function);
		temp = next;
	}

	// Free the original list
	while (list)
	{
		t_list *next = list->next;
		ft_lstdelone(list, del_function);
		list = next;
	}

	return (0);
}