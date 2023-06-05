/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:09:38 by jebouche          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/16 13:20:37 by jebouche         ###   ########.fr       */
=======
/*   Updated: 2022/07/17 23:32:16 by ttikanoj         ###   ########.fr       */
>>>>>>> 5228352459fbd15ba55b8adf67876a551e022997
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*rush03(int x, int y)
{	
<<<<<<< HEAD
	int	j;
	char *result;

	j = 1;
	result = (char *)malloc(x*y*sizeof(char) + 1);
=======
	int		j;
	char	*result;

	j = 1;
	result = (char *)malloc(x * y * sizeof(char) + 1);
>>>>>>> 5228352459fbd15ba55b8adf67876a551e022997
	result[0] = '\0';
	if ((x > 0) && (y > 0))
	{
		while (j <= y)
		{
			if (j == 1)
<<<<<<< HEAD
			{
				result = ft_strcat(result, line_maker(x, 'A', 'B', 'C'));
			}
			else if ((j > 1) && (j < y))
			{
				result = ft_strcat(result, line_maker(x, 'B', ' ', 'B'));
			}
			else
			{
				result = ft_strcat(result, line_maker(x, 'A', 'B', 'C'));
			}
=======
				result = ft_strcat(result, line_maker(x, 'A', 'B', 'C'));
			else if ((j > 1) && (j < y))
				result = ft_strcat(result, line_maker(x, 'B', ' ', 'B'));
			else
				result = ft_strcat(result, line_maker(x, 'A', 'B', 'C'));
>>>>>>> 5228352459fbd15ba55b8adf67876a551e022997
			j++;
		}
	}
	return (result);
}

<<<<<<< HEAD
int main(int argc, char **argv)
{
    char    *test;
    if (argc > 1 && argc < 4)
    {
        test = rush03(ft_atoi(argv[1]), ft_atoi(argv[2]));
        ft_putstr(test);
    }
    return (0);
=======
int	main(int argc, char **argv)
{
	char	*test;

	if (argc > 1 && argc < 4)
	{
		test = rush03(ft_atoi(argv[1]), ft_atoi(argv[2]));
		ft_putstr(test);
	}
	return (0);
>>>>>>> 5228352459fbd15ba55b8adf67876a551e022997
}
