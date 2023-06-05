/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alknight <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:55:25 by alknight          #+#    #+#             */
/*   Updated: 2022/07/16 15:55:29 by alknight         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strcat(char *destination, char *source)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (destination[i] != '\0')
	{
		i++;
	}
	while (source[j] != '\0')
	{
		destination[i] = source[j];
		j ++;
		i ++;
	}
	destination[i] = '\0';
	return (destination);
}
