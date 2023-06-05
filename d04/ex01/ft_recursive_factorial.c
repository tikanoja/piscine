/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 19:06:24 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/02 20:57:38 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	f;

	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else if ((nb < -1) || (nb > 12))
	{
		return (0);
	}
	else
	{
		f = nb * ft_recursive_factorial (nb -1);
		return (f);
	}
}
