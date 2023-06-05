/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printout3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:59:08 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/17 16:29:03 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	xy(int x, int y)
{
	write(1, "[", 1);
	ft_itoa_print(x);
	write(1, "] ", 2);
	write(1, "[", 1);
	ft_itoa_print(y);
	write(1, "]", 2);
}

void	square(int x, int y)
{
	write(1, "[square] ", 9);
	xy(x, y);
}

void	rectangle(int x, int y)
{
	write(1, "[rectangle] ", 12);
	xy(x, y);
}

void	triangle(int x, int y)
{
	write(1, "[triangle] ", 11);
	xy(x, y);
}

void	lozenge(int x, int y)
{
	write(1, "[lozenge] ", 10);
	xy(x, y);
}
