/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:38 by jebouche          #+#    #+#             */
/*   Updated: 2022/07/17 23:28:49 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*rush02_trires(int y, int current_len, char *res)
{
	int	i;
	int	spaces;

	spaces = y - 1;
	i = 1;
	while (i <= y)
	{
		res = ft_strcat(res, print_s(spaces));
		if (i == 1)
		{
			res = ft_strcat(res, line_maker(current_len, 'A', 'B', 'A'));
			current_len = current_len + 2;
		}
		else if (i > 1 && i < y)
		{
			res = ft_strcat(res, line_maker(current_len, 'B', ' ', 'B'));
			current_len = current_len + 2;
		}
		else
			res = ft_strcat(res, line_maker(current_len, 'C', 'B', 'C'));
		i++;
		spaces--;
	}
	return (res);
}

char	*rush02_tri(int x, int y)
{
	int		current_len;
	char	*res;

	current_len = x - (2 * (y -1));
	res = (char *)malloc(((x * y) / 2) * sizeof(char) + 1);
	res[0] = '\0';
	if (tri_possible (x, y) && res)
	{
		res = rush02_trires(y, current_len, res);
	}
	return (res);
}

int	main(int argc, char **argv)
{
	char	*test;

	if (argc > 1 && argc < 4)
	{
		test = rush02_tri(ft_atoi(argv[1]), ft_atoi(argv[2]));
		ft_putstr(test);
	}
	return (0);
}
