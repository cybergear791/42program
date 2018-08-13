/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:55:40 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/12 16:02:30 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "node.h"

struct	s_nstack *new_node(int data)
{
	struct s_nstack *stack_node;

	stack_node = (struct s_nstack*)malloc(sizeof(struct s_nstack));
	stack_node->data = data;
	stack_node->next = NULL;
	return (stack_node);
}

int		is_empty(struct s_nstack *root)
{
	return (!root);
}

void	push(struct s_nstack **root, int data)
{
	struct s_nstack *stack_node;

	stack_node = new_node(data);
	stack_node->next = *root;
	*root = stack_node;
}

int		pop(struct s_nstack **root)
{
	int				popped;
	struct s_nstack *temp;

	if (is_empty(*root))
		return (-1);
	temp = (struct s_nstack*)malloc(sizeof(struct s_nstack));
	temp = *root;
	*root = (*root)->next;
	popped = temp->data;
	free(temp);
	return (popped);
}
