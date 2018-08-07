/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 11:41:56 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/07 11:58:52 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return (0);
	elem = begin_list;
	while (elem->next)
		elem = elem->next;
	return (elem);
}
