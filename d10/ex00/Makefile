# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 09:09:18 by ttikanoj          #+#    #+#              #
#    Updated: 2022/07/11 13:46:09 by ttikanoj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCP = ./srcs/

SRC = $(SRCP)ft_putchar.c $(SRCP)ft_putstr.c $(SRCP)ft_strcmp.c \
	$(SRCP)ft_strlen.c $(SRCP)ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADERS = -I ./includes

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(HEADERS) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
