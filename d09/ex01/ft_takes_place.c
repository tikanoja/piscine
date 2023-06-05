/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:03:22 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/07 11:57:15 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_takes_place(int hour)
{
	char* m2;
	char* m;
	m = "A.M.";
	m2 = "P.M.";
	char* h;

	if(hour>=12)
		h = m2;
		our = hour % 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 %s ", hour, h);
		printf("AND %d.00 %s", hour+1, h);
		printf("\n");
	else
		h = m;
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 %s ", hour, h);
		printf("AND %d.00 %s", hour+1, h);
		printf("\n");
}
