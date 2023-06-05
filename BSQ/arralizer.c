/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arralizer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:39:44 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/18 20:39:46 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char **arralizer(int width, int height, char *string)
{
  char **arr;
  int x;
  int y;
  int n;
  int count;
  int total;
  int c;

  x = 0;
  y = 0;
  n = 0;
  c = 0;
  count = 0;
  while(string[c] != '\n')
  {
    c++;
  }
  total = height * width - (width - c);
  
  
  arr = malloc(sizeof(char *) * height + 1);
  while(x < height)
  {
    arr[x] = malloc(sizeof(char) * width + 1);
    
    x++;
  }

  x = 0;
  while(string != '\0')
  {
    if(count == total)
    {
      break;
    }
    arr[x][y] = string[n];
    y++;
    n++;
    if(string[n] == '\n')
    {   
      
      x++;
      y = 0;
      n++;
    }
    count++;
  }
  return(arr);
}
