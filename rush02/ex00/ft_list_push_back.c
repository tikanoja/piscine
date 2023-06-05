/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:09:43 by jebouche          #+#    #+#             */
/*   Updated: 2022/07/13 14:52:57 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_list_push_back(t_string **begin_list, char *data)
{
	t_string	*current_node;
	t_string	*new_node;

	new_node = ft_create_elem(data);
	current_node = *begin_list;
	if (new_node)
	{
		if (*begin_list == NULL)
		{
			*begin_list = new_node;
		}
		else
		{
			while (current_node->next != NULL)
			{
				current_node = current_node->next;
			}
			current_node->next = new_node;
		}
	}
}
