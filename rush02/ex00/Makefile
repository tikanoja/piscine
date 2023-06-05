NAME = rush-2
CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFILES:= ft_create_elem.c ft_list_push_back.c cat_input.c ft_strcpy.c input_processor.c list_destroyer.c pattern_detect.c line_maker.c create_rush_struct.c printout3.c printout2.c printout1.c shape_detector.c ft_strcat.c ft_putchar.c ft_atoi.c ft_putstr.c print_s.c tri_possible.c ft_itoa_print.c rush00.c rush01.c rush02.c rush03.c rush04.c rush00_tri.c rush01_tri.c rush02_tri.c rush03_tri.c rush04_tri.c rush-2.c shapedar.c
OBJS:= $(CFILES:%.c=%.o)
EXEC:= rush-00.c rush-01.c rush-02.c rush-03.c rush-04.c rush-00_tri.c rush-01_tri.c rush-02_tri.c rush-03_tri.c rush-04_tri.c rush-2.c
EXEOBJS:= $(EXEC:%.c=%)



all: $(OBJS) lib $(EXEOBJS)

%.o: %.c	
	$(CC) $(CFLAGS) -c -o $@ $<

lib: $(OBJS)
	ar rc libft.a $+
	ranlib libft.a

%: %.c
	$(CC) $(CFLAGS) -o $@ $< -L. -lft 

clean:
	rm -f *.o
	rm -f *.a
	
fclean: $(EXEOBJS)
	rm -f *.o
	rm -f *.a
	rm -f *.out
	rm -f $+
	