/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:57:57 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/07 17:37:25 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	c;
	int	*a;
	int	*ptr;

	ptr = 0;
	i = 0;
	c = min;
	if (min >= max)
		return (ptr);
	while (c < max)
	{
		i++;
		c++;
	}
	a = (int *)malloc(sizeof(int) * i + 1);
	i = 0;
	c = min;
	while (c < max)
	{
		a[i] = c;
		i++;
		c++;
	}
	return (a);
}
