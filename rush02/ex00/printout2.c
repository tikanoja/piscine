/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printout2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:58:52 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/17 23:04:49 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdio.h>

void	sastantua(int x, int y)
{
	write(1, "[sastantua] ", 12);
	xy(x, y);
}

void	circle(int x, int y)
{
	write(1, "[circle] ", 9);
	xy(x, y);
}

void	shapes(t_rush *shape)
{
	if (shape->shape[0] == 1)
	{
		write(1, " || ", 4);
		square(shape->x, shape->y);
	}
	if (shape->shape[1] == 1)
	{
		write(1, " || ", 4);
		rectangle(shape->x, shape->y);
	}
	if (shape->shape[2] == 1)
	{
		write(1, " || ", 4);
		triangle(shape->x, shape->y);
	}
}

void	rush00_p(int x, int y)
{
	write(1, "0] ", 3);
	xy(x, y);
}

void	rush01_p(int x, int y)
{
	write(1, "1] ", 3);
	xy(x, y);
}
