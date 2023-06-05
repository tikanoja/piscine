/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:07:00 by jebouche          #+#    #+#             */
/*   Updated: 2022/07/05 22:14:11 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strcpy(char	*src, int len)
{
	int		i;
	char	*copy;

	i = 0;
	copy = (char *)malloc(sizeof(char) * len + 1);
	if (copy != NULL)
	{
		while (src[i] != '\0')
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
	}
	return (copy);
}
