/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alknight <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:28:14 by alknight          #+#    #+#             */
/*   Updated: 2022/07/17 19:28:46 by alknight         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

char	*print_s(int spaces)
{
	char	*spcs;
	int		i;

	spcs = (char *)malloc(spaces * sizeof(char) + 1);
	i = 0;
	while (i < spaces)
	{
		spcs[i] = ' ';
		i++;
	}
	spcs[i] = '\0';
	return (spcs);
}
