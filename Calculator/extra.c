/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 15:21:34 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/12 12:21:17 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "node.h"

int		peek(struct s_nstack *root)
{
	if (is_empty(root))
		return (-1);
	return (root->data);
}

int		operand(int a, int b, char op)
{
	if (op == '+')
		return (a + b);
	else if (op == '-')
		return (a - b);
	else if (op == '*')
		return (a * b);
	else if (op == '/')
		return (a / b);
	else if (op == '%')
		return (a % b);
	return (0);
}

int		order(char op)
{
	if (op == '+' || op == '-')
		return (1);
	else if (op == '*' || op == '/')
		return (2);
	return (0);
}

void	math(struct s_nstack *stack_node, \
		struct s_nstack *stack_op, int a, int b, char op)
{
	a = peek(stack_node);
	pop(&stack_node);
	b = peek(stack_node);
	pop(&stack_node);
	op = peek(stack_op);
	pop(&stack_op);
	push(&stack_node, operand(a, b, op));
}
