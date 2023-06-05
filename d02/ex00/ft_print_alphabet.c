/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 12:14:04 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/06/30 16:23:54 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	i;

	i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		i = i + 1;
	}
}
