/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printout1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:58:39 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/17 23:03:58 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  <stdio.h>
#include "ft.h"

void	rush02_p(int x, int y)
{
	write(1, "2] ", 3);
	xy(x, y);
}

void	rush03_p(int x, int y)
{
	write(1, "3] ", 3);
	xy(x, y);
}

void	rush04_p(int x, int y)
{
	write(1, "4] ", 3);
	xy(x, y);
}

void	patterns(t_rush *patterns)
{
	int	i;

	i = 0;
	while (patterns->patterns[i] < 10)
	{
		write(1, "[rush-0", 7);
		if (patterns->patterns[i] == 0)
			rush00_p(patterns->x, patterns->y);
		else if (patterns->patterns[i] == 1)
			rush01_p(patterns->x, patterns->y);
		else if (patterns->patterns[i] == 2)
			rush02_p(patterns->x, patterns->y);
		else if (patterns->patterns[i] == 3)
			rush03_p(patterns->x, patterns->y);
		else if (patterns->patterns[i] == 4)
			rush04_p(patterns->x, patterns->y);
		i++;
		if (patterns->patterns[i] < 10)
			write(1, " || ", 4);
	}
}

void	printoutput(t_rush *data)
{
	patterns(data);
	shapes(data);
	write(1, "\n", 1);
}
