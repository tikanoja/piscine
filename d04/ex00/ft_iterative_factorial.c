/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:55:56 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/02 19:00:05 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb > 12)
	{
		return (0);
	}
	else
	{
		f = 1;
		i = 1;
		while (i <= nb)
		{
			f = f * i;
			i = i + 1;
		}
		return (f);
	}
}
