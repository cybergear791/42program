/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 11:16:20 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/12 15:36:25 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include "node.h"
#include "extra.h"
#include <stdlib.h>

int	eval_expr(char *str)
{
	struct s_nstack *stack_node;
	struct s_nstack *stack_op;
	int		i;
	int		j;
	int		a;
	int		b;
	char	op;

	i = 0;
	while (str[i])
	{	
		if (str[i] == ' ' || str[i] == '"')
			i++;
		else if (str[i] == '(')
			push(&stack_op, str[i]);
		else if (str[i] >= '0' && str[i] <= '9')
		{
			j = 0;
			while (str[i] >= '0' && str[i] <= '9' && i < ft_strlen(str))
			{
				j = (j * 10) + (str[i] - '0');
				i++;
			}
			push(&stack_node, j);
		}
		else if (str[i] == ')')
		{
			while (is_empty(stack_op) && peek(stack_op) != '(')
				math(stack_node, stack_op, a, b, op);
			pop(&stack_op);
		}
		else
		{
			while (is_empty(stack_op) && order(peek(stack_op)) \
					>= order(str[i]))
				math(stack_node, stack_op, a, b, op);
			push(&stack_op, str[i]);
		}
		i++;
	}
	while (is_empty(stack_op))
		math(stack_node, stack_op, a, b, op);
	return (peek(stack_node));
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
