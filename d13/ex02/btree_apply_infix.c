/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:29:33 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/15 20:35:18 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	btree_apply_infix(root->left, applyf);
	applyf(root->data);
	btree_apply_infix(root->right, applyf);
}
