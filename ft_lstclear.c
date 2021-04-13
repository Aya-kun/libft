#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list1;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		list1 = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = list1;
	}
}
