/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:24:36 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/18 13:31:55 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define  BSQ_H
# define BUF_SIZE  30000

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>

typedef struct s_bsq
{
	char *str;
	int x;
	int y;
} t_bsq;

typedef struct s_list
{
	char			*data;
	struct s_list	*next;
} t_list;



void	ft_putchar(char c);
void	ft_putstr(char *str);
void	print_list(t_list *list);
char 	**arrasizer(char *string);
void	ft_putnbr(int nb);
char 	**arralizer(int width, int height, char *string);
void	print_arr(char **arr, int	height, int	width);
char 	*ft_info(char **arrmap);
char	**arraslicer(char **arrmap);
void	**zolver(char **puzzle, char *info);
int		**binarizer(char **puzzle, char empty, char obstacle);
void	intprint(int **arrmap, int	height, int	width);
char **biggie(char **m, char empty, char obstacle, char fill);







#endif
