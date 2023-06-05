/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouzir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:37:51 by aouzir            #+#    #+#             */
/*   Updated: 2022/07/16 14:52:30 by aouzir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	dimensions(t_rush *rush)
{
	int	width;
	int	height;
	int	i;

	i = 0;
	height = 0;
	while (rush->str[i] != '\0')
	{
		width = 0;
		while (rush->str[i] != '\n')
		{
			width ++;
			i ++;
		}
		if (width > rush->x)
			rush->x = width;
		height ++;
		i ++;
	}
	rush->y = height;
}

t_rush	*shape_detector(t_rush *rush)
{
	int	i;

	i = 0;
	dimensions(rush);
	return (rush);
}
