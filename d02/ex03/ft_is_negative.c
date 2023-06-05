/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 19:32:38 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/06/30 16:44:33 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n > 0)
	{
		ft_putchar('P');
		ft_putchar('\n');
	}
	else if (n < 0)
	{
		ft_putchar('N');
		ft_putchar('\n');
	}
}
