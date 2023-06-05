/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arralizer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:14:36 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/18 17:14:38 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char **arrasizer(char *string)
{
    int n;
    int height;
    int width;
    char **arr;

    n = 0;
    height = 0;
    width = 0;
    while(string[n] != '\0')
    {
        if(string[n] == '\n')
        height++;
    n++;
    }
    n = 0;
    while(string[n] != '\n')
    {
        n++;
        if(string[n] == '\n')
        {
            n++;
            while(string[n] != '\n')
            {
                width++;
                n++;            
            }
        }
    }
    arr = arralizer(width, height, string);
    return (arr);
}