/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 22:43:24 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/03 10:26:56 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if (i > j && j > k)
		return (j);
	else if (j > i && i > k)
		return (i);
	else if (k > j && j > i)
		return (j);
	else if (k > i && i > j)
		return (i);
	else if (i > k && k > j)
		return (k);
	else if (j > k && k > i)
		return (k);
	return (k);
}
