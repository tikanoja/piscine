/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shapedar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alknight <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:08:58 by alknight          #+#    #+#             */
/*   Updated: 2022/07/17 21:09:00 by alknight         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	shapedar(t_rush *rush_analysis)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (rush_analysis->patterns[i] < 10)
	{
		if (rush_analysis->patterns[i] < 5)
		{
			if (rush_analysis->x == rush_analysis->y)
			{
				rush_analysis->shape[0] = 1;
				j ++;
			}
			rush_analysis->shape[1] = 1;
			j ++;
		}
		else
		{
			rush_analysis->shape[2] = 1;
			rush_analysis->patterns[i] = rush_analysis->patterns[i] - 5;
			j ++;
		}
		i ++;
	}
}
