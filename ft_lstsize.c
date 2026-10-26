#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	len;
	t_list			*ptr;

	len = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	return (len);
}
