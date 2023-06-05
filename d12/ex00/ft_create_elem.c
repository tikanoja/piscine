/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:55:32 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/13 15:07:56 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
	tmp->data = data;
	tmp->next = NULL;
	}
	return (tmp);
}
