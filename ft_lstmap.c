#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_node;
	void	*new_content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	head = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			ft_lstclear(&head, del);
			del(new_content);
			return (NULL);
		}
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}
