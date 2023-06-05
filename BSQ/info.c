#include "bsq.h"

char *ft_info(char **arrmap)
{
    char *info;
    int x;
    int y;
    int mem;

    x = 0;
    y = 0;
    mem = 0;
    while(arrmap[x][y] != '\0')
    {
        y++;
        mem++;
    }
    y = 0;
    info = malloc(sizeof(char) * mem);
    while(arrmap[x][y] != '\0')
        {
            info[y] = arrmap[x][y];
            y++;
        }
    return(info);
}