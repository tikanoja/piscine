/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttikanoj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:01:12 by ttikanoj          #+#    #+#             */
/*   Updated: 2022/07/15 12:16:17 by ttikanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct s_btree	t_btree;

struct s_btree
{
	void	*data;
	t_btree	*right;
	t_btree	*left;
};

t_btree	*btree_create_node(void *item);

#endif
