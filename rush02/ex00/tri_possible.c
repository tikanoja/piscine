/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri_possible.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alknight <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:29:37 by alknight          #+#    #+#             */
/*   Updated: 2022/07/17 19:29:51 by alknight         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	tri_possible(int x, int y)
{
	int	max_height;

	if (x % 2 == 0)
		max_height = x / 2;
	else
		max_height = (x + 1) / 2;
	if (max_height == y && y > 1)
		return (1);
	else
		return (0);
}
