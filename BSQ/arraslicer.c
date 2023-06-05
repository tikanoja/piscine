#include "bsq.h"

char **arraslicer(char **arrmap)
{
    char **puzzle;
    int x;
    int y;
    int height;
    int width;
    int n;


    x = 0;
    y = 0;
    height = 0;
    width = 0;
    n = 0;
    while(arrmap[1][x] != '\0')
    {
        x++;
        width++;
    }

    while(arrmap[y] != '\0')
    {
        y++;
        height++;
    }
    
    x = 0;
    y = 0;
    puzzle = malloc(sizeof(char *) * height - 1);
    while(x < height)
    {
        puzzle[x] = malloc(sizeof(char) * width + 1);
        x++;
    }
    while(*arrmap[y] != '\0')
        {
            puzzle[y] = arrmap[y+1];
            y++;
        }
    ft_putstr("SEGFAULT");
    
    
    /*
    puzzle = malloc(sizeof(char *) * height + 1);
    while(x < height)
    {
        arr[x] = malloc(sizeof(char) * width + 1);
    
        x++;
    }
    */
    return(puzzle);
}