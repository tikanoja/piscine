/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 10:16:35 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/07 13:50:48 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_generic(void)
{
	write(1, "Tu Tu Tu Tu ; Tu Tu Tu Tu", 25);
	write(1, "\n", 1);
}
