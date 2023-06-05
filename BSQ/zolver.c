#include "bsq.h"

void **zolver(char **puzzle, char *data)
{
    int *height;
    char empty;
    char obstacle;
    char fill;
    int n;
    int count;

    n = 0;
    count = 0;
    while(data[n] != '\0')
    {
    count++;
    n++;
    }

    n = 0;
    while(data[n] != '\0')
    {
        while(n < count - 3)
            n++;
        empty = data[n];
        n++;
        obstacle = data[n];
        n++;
        fill = data[n];
        break;
    }
    biggie(puzzle, empty, obstacle, fill);
    return(0);
}