/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:53:31 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/14 20:56:49 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*open_file(char *file)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		ret;
	char 	*x;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("no file");
	}
	
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	x = (char *)malloc(sizeof(read) + 1);
	x = buf;
	return (x);
}

int	main(int argc, char **argv)
{
	
	int	i;
	int n;
	char *map;
	char **arrmap;
	char *info;

	argc = 0;
	i = 1;
	n = 0;
	while (argv[i] != '\0')
	{
		map = open_file(argv[i]);
		arrmap = arrasizer(map);
		i++;
	}
	info = ft_info(arrmap);
	zolver(arrmap, info);
	return (0);
}
