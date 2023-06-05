/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:38 by jebouche          #+#    #+#             */
/*   Updated: 2022/07/17 23:25:41 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*rush01(int x, int y)
{	
	int		j;
	char	*result;

	j = 1;
	result = (char *)malloc(x * y * sizeof(char) + 1);
	result[0] = '\0';
	if ((x > 0) && (y > 0))
	{
		while (j <= y)
		{
			if (j == 1)
				result = ft_strcat(result, line_maker(x, '/', '*', '\\'));
			else if ((j > 1) && (j < y))
				result = ft_strcat(result, line_maker(x, '*', ' ', '*'));
			else
				result = ft_strcat(result, line_maker(x, '\\', '*', '/'));
			j++;
		}
	}
	return (result);
}

int	main(int argc, char **argv)
{
	char	*test;

	if (argc > 1 && argc < 4)
	{
		test = rush01(ft_atoi(argv[1]), ft_atoi(argv[2]));
		ft_putstr(test);
	}
	return (0);
}
