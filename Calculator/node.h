/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:55:40 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/12 14:36:12 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NODE_H
# define NODE_H

struct	s_nstack
{
	int				data;
	struct s_nstack *next;
};
int		is_empty(struct s_nstack *root);
void	push(struct s_nstack **root, int data);
int		pop(struct s_nstack **root);
#endif
