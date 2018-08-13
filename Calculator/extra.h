/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 15:20:26 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/12 12:08:25 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTRA_H
# define EXTRA_H

int		peek(struct s_nstack *root);
int		operand(int a, int b, char op);
int		order(char op);
void	math(struct s_nstack *stack_node, \
		struct s_nstack *stack_op, int a, int b, char op);
#endif
