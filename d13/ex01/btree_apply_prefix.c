/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:05:23 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/15 19:58:17 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	applyf(root->data);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
}
