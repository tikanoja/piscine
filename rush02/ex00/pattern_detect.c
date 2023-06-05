/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pattern_detect.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alknight <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:12:23 by alknight          #+#    #+#             */
/*   Updated: 2022/07/16 14:54:33 by alknight         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdio.h>

char	(*(*g_rush_ptr[10])(int x, int y));

int	pattern_tester(t_rush *rush, char *rush_str, int i, int j)
{
	char	*temp;

	temp = rush->str;
	while (*temp != '\0')
	{
		if (*rush_str != *temp)
			break ;
		temp ++;
		rush_str ++;
	}
	if (*rush_str == '\0' && *temp == '\0')
	{
		rush->patterns[j] = i;
		j ++;
	}
	temp = rush->str;
	return (j);
}

t_rush	*pattern_detect(t_rush *rush)
{
	char	*rush_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	g_rush_ptr[0] = rush00;
	g_rush_ptr[1] = rush01;
	g_rush_ptr[2] = rush02;
	g_rush_ptr[3] = rush03;
	g_rush_ptr[4] = rush04;
	g_rush_ptr[5] = rush00_tri;
	g_rush_ptr[6] = rush01_tri;
	g_rush_ptr[7] = rush02_tri;
	g_rush_ptr[8] = rush03_tri;
	g_rush_ptr[9] = rush04_tri;
	while (i <= 9)
	{
		rush_str = g_rush_ptr[i](rush->x, rush->y);
		j = pattern_tester(rush, rush_str, i, j);
		i++;
	}
	rush->patterns[j] = 10;
	return (rush);
}
