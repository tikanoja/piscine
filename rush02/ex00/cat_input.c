/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:25:12 by jebouche          #+#    #+#             */
/*   Updated: 2022/07/17 13:26:52 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*cat_input(t_string **head, int len)
{
	char		*input;
	t_string	*temp;

	temp = *head;
	input = (char *)malloc(sizeof(char) * len + 1);
	input[len] = '\0';
	if (head == NULL)
		return (NULL);
	if (input)
	{
		if (temp->data)
			ft_strcat(input, temp->data);
		while (temp->next != NULL)
		{
			temp = temp->next;
			ft_strcat(input, temp->data);
		}
	}
	return (input);
}
