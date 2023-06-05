#include "bsq.h"

void	print_arr(char **arrmap, int	height, int	width)
{
    char	output;
  int j;
  int i = 0;
  j = 0;
	while (j < height + 1)
	{
        i  = 0;
		while (i < width)
		{
			output = arrmap[j][i];
			write(1, &output, 1);
            i++;
		}
		write(1, "\n", 1);
		j++;
	}
}