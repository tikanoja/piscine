/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:01:40 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/07 15:42:20 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_button(int i, int j, int k)
{
	if (i > j && j > k)
		return (j);
	if (k > j && j > k)
		return (j);
	if (k > i && i > j)
		return (i);
	if (j > i && i > k)
		return (i);
	if (i > k && k > j)
		return (k);
	if (j > k && k > i)
		return (k);
	else
		return (0);
}
