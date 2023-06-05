/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_destroyer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:23:48 by jebouche          #+#    #+#             */
/*   Updated: 2022/07/17 13:27:21 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	list_destroyer(t_string **head)
{
	t_string	*destroy_me;

	destroy_me = *head;
	while (*head)
	{
		*head = (*head)->next;
		if (destroy_me)
			free(destroy_me);
		destroy_me = *head;
	}
}
