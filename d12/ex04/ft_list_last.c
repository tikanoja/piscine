/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:53:27 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/13 20:12:17 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_last(t_list *begin_list)
{
	t_list	*current;

	current = begin_list;
	while (current != NULL)
	{
		current = current -> next;
	}
	return (current);
}
