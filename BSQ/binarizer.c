#include "bsq.h"

int    **binarizer(char **puzzle, char empty, char obstacle)
{
    int width;
    int height;
    int x;
    int y;
    int **binmap;

    width = 0;
    height = 0;
    x = 0;
    y = 0;

    while(puzzle[1][x] != '\0')
    {
        x++;
        width++;
    }
    while(puzzle[y] != '\0')
    {
        y++;
        height++;
    }
    
    binmap = malloc(sizeof(int *) * height - 1);
    while(x < height)
    {
        binmap[x] = malloc(sizeof(int) * width + 1);
        x++;
    }
    x = 0;
    y = 1;
    while(puzzle[y] != '\0')
    {
        x = 0;
        while(puzzle[y][x] == '\0')
        {
            if(puzzle[y][x] == empty)
                binmap[y-1][x] = 1;
            else
                binmap[y-1][x] = 0;
            x++;
        }
        y++;
    }
    ft_putnbr(binmap[1][1]);
    ft_putstr("WHERE DA PROBLEM @");
    intprint(binmap, height, width);


/*
    while(*puzzle[y] != '\0')
        {
            binmap[y] = puzzle[y+1];
            y++;
        }

    y = 0;
    while (y < height +1 )
    {
           x = 0;
        while (x < width)
        {
            if(binmap [x][y] == obstacle)
                binmap[x][y] - obstacle;
            else
                binmap[x][y] - empty + 1;
            x++;
        }
    y++;
    }
    */
    //print_arr(binmap, height, width);
    return(binmap);
}