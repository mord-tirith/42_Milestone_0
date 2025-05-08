
#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*t;

	if (!lst || !f)
		return ;
	t = lst;
	while (t != NULL)
	{
		f(t->content);
		t = t->next;
	}
}
