/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:54:01 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/03 16:30:56 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_last(int x)
{
	int		col;

	col = 1;
	if (col == 1)
	{
		ft_putchar('C');
		col++;
	}
	while (col < x)
	{
		ft_putchar('B');
		col++;
	}
	if (col == x)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	ft_mid(int x)
{
	int		col;

	col = 1;
	if (col == 1)
	{
		ft_putchar('B');
		col++;
	}
	while (col < x)
	{
		ft_putchar(' ');
		col++;
	}
	if (col == x)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

int	ft_first(int x)
{
	int		col;

	col = 1;
	if (col == 1)
	{
		ft_putchar('A');
		col++;
	}
	while (col < x)
	{
		ft_putchar('B');
		col++;
	}
	if (col == x)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

int	rush(int x, int y)
{
	int		row;

	row = 1;
	if (x <= 0 || y <= 0)
		return (0);
	else
	{
		if (row == 1)
		{
			ft_first(x);
			row++;
		}
		while (row < y)
		{
			ft_mid(x);
			row++;
		}
		if (row == y)
		{
			ft_last(x);
		}
	}
	return (0);
}
