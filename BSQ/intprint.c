#include "bsq.h"

void	intprint(int **arrmap, int	height, int	width)
{
    int	output;
  int j;
  int i = 0;
  j = 0;
  
	while (j < height + 1)
	{
        i  = 0;
		while (i < width)
		{
			ft_putnbr(i);
			output = arrmap[j][i];
			write(1, &output, 1);
            i++;
		}
		write(1, "\n", 1);
		j++;
	}
}