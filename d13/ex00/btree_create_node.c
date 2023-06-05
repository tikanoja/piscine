/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:09:17 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/15 21:15:11 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*tmp;

	tmp = malloc(sizeof(t_btree));
	if (tmp)
	{
	tmp->data = item;
	tmp->left = NULL;
	tmp->right = NULL;
	}
	return (tmp);
}
