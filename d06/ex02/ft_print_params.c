/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:04:07 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/06 19:19:22 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		a;

	str = &**argv;
	i = 1;
	a = 0;
		while (argc > i)
		{
			a = 0;
			while (argv[i][a] != '\0')
			{
			ft_putchar(argv[i][a]);
			a++;
			}
		i++;	
		ft_putchar('\n');
		}
	return (0);
}
