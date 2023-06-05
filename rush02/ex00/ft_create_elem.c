/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:21:30 by jebouche          #+#    #+#             */
/*   Updated: 2022/07/17 13:29:42 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_string	*ft_create_elem(char *data)
{
	t_string	*new;

	new = (t_string *)malloc(sizeof(t_string) * 1);
	if (new)
	{
		new -> data = data;
		new -> next = NULL;
	}
	return (new);
}
