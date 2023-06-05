/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 07:57:09 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/08 19:28:10 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_charcount(char *str)
{
	int	o;
	int	s;

	o = 0;
	s = 0;
	while (str != '\0')
	{
		while (str[o] == 32 || str[o] == 9 || str [o] == '\n')
		{
			o++;
			while (str[o] != 32 || str[o] != 9 || str [o] != '\n')
			{
				s++;
			}
		}
	}
	return (s);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		c;
	char	**a;

	i = 0;
	j = 0;
	c = 0;
	*a = (char *)malloc(sizeof(char) * ft_charcount(str) + 1);
	while (str != '\0')
	{
		while (str[i] == 32 || str[i] == 9 || str [i] == '\n')
		{
			i++;
			while (str[i] != 32 || str[i] != 9 || str [i] != '\n')
			{
				a[j][c] = str[i];
				c++;
				i++;
			}
			j++;
			c = 0;
		}
	}
	return (a);
}
