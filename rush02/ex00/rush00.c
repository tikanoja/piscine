/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:38 by jebouche          #+#    #+#             */
/*   Updated: 2022/07/17 23:05:31 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*rush00(int x, int y)
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
				result = ft_strcat(result, line_maker(x, 'o', '-', 'o'));
			else if ((j > 1) && (j < y))
			{
				result = ft_strcat(result, line_maker(x, '|', ' ', '|'));
			}
			else
			{
				result = ft_strcat(result, line_maker(x, 'o', '-', 'o'));
			}
			j++;
		}
	}
	return (result);
}
