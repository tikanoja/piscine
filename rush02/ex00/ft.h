/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouzir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:12:26 by aouzir            #+#    #+#             */
/*   Updated: 2022/07/17 18:47:09 by alknight         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define BUF_SIZE 16

# include <unistd.h>
# include <stdlib.h>
# include <sys/uio.h>
# include <sys/types.h>

typedef struct s_rush
{
	char	*str;
	int		x;
	int		y;
	int		shape[6];
	int		reversed;
	int		patterns[10];
}	t_rush;

typedef struct s_string
{
	char				*data;
	struct s_string		*next;
}	t_string;

t_string	*ft_create_elem(char *data);
void		ft_list_push_back(t_string **begin_list, char *data);
void		list_destroyer(t_string **head);
char		*cat_input(t_string **head, int len);
char		*ft_strcpy(char *src, int len);
char		*input_processer(void);
void		shapes(t_rush *shape);
void		circle(int x, int y);
void		sastantua(int x, int y);
void		lozenge(int x, int y);
void		triangle(int x, int y);
void		rectangle(int x, int y);
void		square(int x, int y);
void		xy(int x, int y);
void		printoutput(t_rush *data);
void		patterns(t_rush *patterns);
char		*rush00(int x, int y);
char		*rush01(int x, int y);
char		*rush02(int x, int y);
char		*rush03(int x, int y);
char		*rush04(int x, int y);
void		rush00_p(int x, int y);
void		rush01_p(int x, int y);
void		rush02_p(int x, int y);
void		rush03_p(int x, int y);
void		rush04_p(int x, int y);
char		*rush00_tri(int x, int y);
char		*rush01_tri(int x, int y);
char		*rush02_tri(int x, int y);
char		*rush03_tri(int x, int y);
char		*rush04_tri(int x, int y);
char		*rush00_all(int shape, int x, int y);
char		*line_maker(int len, char first, char middle, char last);
char		*ft_strcat(char *destination, char *source);
void		ft_itoa_print(int num);
t_rush		*pattern_detect(t_rush *rush);
t_rush		*shape_detector(t_rush *rush);
void		ft_putstr(char *str);
void		ft_putchar(char c);
int			ft_atoi(char *str);
char		*print_s(int spaces);
int			tri_possible(int x, int y);
t_rush		*create_rush_struct(char *str);
void		shapedar(t_rush *rush_analysis);

#endif
