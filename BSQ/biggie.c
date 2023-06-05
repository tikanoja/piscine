#include "bsq.h"

int    howbig(char **m, char obstacle, int x, int y)
{
    int maxx;
    int maxy;
    int maxs;
    int i;
    int j;
    int n;
        ft_putstr("VALUES OF X AND Y\n");
        ft_putnbr(x);
        ft_putnbr(y);
        ft_putstr("\n\n");
    
    i = x;
    j = y;
    n = 1;

    while(m[j][i] != 'o' && m[j][i] != '\n' && m[j][i] != '\0')
    {
    ft_putstr("NAKKIMAKKARA\n");
        j = y;
        while(j < n && (m[j][i] != 'o' && m[j][i] != '\n' && m[j][i] != '\0'))
        {
            i = x;
            while(i < n && (m[j][i] != 'o' && m[j][i] != '\n' && m[j][i] != '\0'))
            {
            i++;
            }
        j++;
        }
        n++;
    }
    
   /* if(n >=maxs)
    {
        ft_putstr("NEW MAX");
        maxs = n;
        maxy = y;
        maxx = x;
    }
//    ft_putnbr(maxs);
//    ft_putnbr(maxx);
//    ft_putnbr(maxy);
//    ft_putstr("\n\n\n");
   */ return(n);

}

char **biggie(char **m, char empty, char obstacle, char fill)
{
    int x;
    int y;
    int width;
    int height;

    char **sub;
    int maxx;
    int maxy;
    int maxs;
    int value;

    int max;
    max = 0;

    x = 0;
    y = 0;
    while(m[1][x] != '\0')
    {
        x++;
        width++;
    }
    while(m[y] != '\0')
    {
        y++;
        height++;
    }
    
    y = 1;

    while (y < height)
    {
        x = 0;
        while (x < width)
        {
            if(m[y][x] == '.')
                {
                write(1, "inside here:\n", 13);
                value = howbig(m, obstacle, x, y);
                if (value > max)
                {
                    max = value;
                  /*  ft_putstr("MAX VALUE:");
                    ft_putnbr(max);
                    ft_putstr("\n\n");*/
                }
                }
                x++;
        }
        y++;
       // ft_putnbr(y);
    }


    return(m);
}