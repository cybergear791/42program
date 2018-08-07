/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 10:24:23 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/06 16:42:19 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int order;

	if (length == 0)
		return (0);
	else if (length == 1)
		return (1);
	i = 0;
	while (f(tab[i], tab[i + 1]) == 0)
		i++;
	if (f(tab[i], tab[i + 1]) < 0)
		order = 1;
	else
		order = -1;
	i++;
	while (tab[i] != 0 && i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0 && order == -1)
			return (0);
		else if (f(tab[i], tab[i + 1]) > 0 && order == 1)
			return (0);
		else
			i++;
	}
	return (1);
}
