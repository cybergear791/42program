/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 12:10:54 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/07 12:10:56 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_clear(t_list **begin_list)
{
	t_list	*elem;
	t_list	*temp;

	elem = *begin_list;
	if (!elem)
		return ;
	while (elem)
	{
		temp = elem;
		free(elem);
		elem = temp->next;
	}
	*begin_list = 0;
}
