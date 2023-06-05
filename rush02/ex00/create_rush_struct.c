/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_rush_struct.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:39:41 by jebouche          #+#    #+#             */
/*   Updated: 2022/07/17 15:40:28 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_rush	*create_rush_struct(char *str)
{
	t_rush	*new;

	new = (t_rush *)malloc(sizeof(t_rush) * 1);
	if (new)
	{
		new->str = str;
		new->x = 0;
		new->y = 0;
		new->reversed = 0;
	}
	return (new);
}
