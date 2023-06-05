/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:14:24 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/13 19:47:06 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*current;
	int		i;

	current = begin_list;
	i = 0;
	while (current != 0)
	{
		i++;
		current = current -> next;
	}
	return (i);
}
