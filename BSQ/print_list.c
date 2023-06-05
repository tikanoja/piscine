#include "bsq.h"

void	print_list(t_list *list)
{
	while(list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}
