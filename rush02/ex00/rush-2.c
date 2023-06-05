/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:58:25 by jebouche          #+#    #+#             */
/*   Updated: 2022/07/17 14:59:33 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	main()
{	
	char	*input_str;
	t_rush	*rush_analysis;

	input_str = input_processer();
	if (input_str  == 0)
	{
		ft_putstr("none\n");
		return (0);
	}
	rush_analysis = create_rush_struct(input_str);
	shape_detector(rush_analysis);
	pattern_detect(rush_analysis);
	if (rush_analysis->patterns[0] == 10)
	{
		ft_putstr("none\n");
		return (0);
	}
	shapedar(rush_analysis);
	printoutput(rush_analysis);
	return (0);
}