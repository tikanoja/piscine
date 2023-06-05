/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:17:29 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/12 20:20:11 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	asc = 0;
	desc = 0;
	i = 0;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) > 0)
			asc = 1;
		i++;
	}
	i = 0;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) < 0)
			desc = 1;
		i++;
	}
	if (asc == 0 || desc == 0)
		return (1);
	else
		return (0);
}
