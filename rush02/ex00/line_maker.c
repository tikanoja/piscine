/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_maker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alknight <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:29:01 by alknight          #+#    #+#             */
/*   Updated: 2022/07/16 15:29:10 by alknight         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*line_maker(int len, char first, char middle, char last)
{
	int		i;
	char	*result;

	result = malloc(len * sizeof(char) + 2);
	i = 1;
	while (i <= len)
	{
		if (i == 1)
			result[i - 1] = first;
		else if ((i > 1) && (i < len))
			result[i - 1] = middle;
		else
			result[i - 1] = last;
		i++;
	}
	result[i - 1] = '\n';
	result[i] = '\0';
	return (result);
}
