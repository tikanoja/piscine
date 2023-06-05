/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_processor.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebouche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:05:42 by jebouche          #+#    #+#             */
/*   Updated: 2022/07/17 13:23:14 by jebouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*input_processer(void)
{
	char		buffer[BUF_SIZE + 1];
	int			ret;
	int			total_read;
	char		*to_save;
	t_string	*string_head;

	string_head = NULL;
	total_read = 0;
	ret = read(0, buffer, BUF_SIZE);
	if (ret <= 0)
	{
		return (0);
	}
	while (ret > 0)
	{
		buffer[ret] = '\0';
		to_save = ft_strcpy(buffer, ret);
		ft_list_push_back(&string_head, to_save);
		total_read = total_read + ret;
		ret = read(0, buffer, BUF_SIZE);
	}
	to_save = cat_input(&string_head, total_read);
	list_destroyer(&string_head);
	return (to_save);
}
