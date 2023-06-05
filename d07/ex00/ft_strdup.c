/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 07:09:35 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/07 13:55:55 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;
	char	a;

	i = 0;
	a = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	new = (char *)malloc(sizeof(char) * i + 1);
	if (new == 0)
		return (0);
	while (src[a] != '\0')
	{
		new[a] = src[a];
		a++;
	}
	return (new);
}
