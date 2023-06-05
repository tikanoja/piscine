/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:17:57 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/13 18:00:53 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp;
	t_list	*current;

	tmp = ft_create_elem(data);
	current = *begin_list;
	if (*begin_list == NULL)
		*begin_list = tmp;
	else
	{
		while (current->next != NULL)
		{
			current = current -> next;
		}
	current -> next = tmp;
	}
}
