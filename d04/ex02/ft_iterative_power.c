/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 21:00:04 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/02 22:33:46 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	if (power > 0)
	{
		ans = 1;
		while (power > 0)
		{
			ans = ans * nb;
			power = power - 1;
		}
		return (ans);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
