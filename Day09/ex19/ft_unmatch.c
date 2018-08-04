/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 13:43:03 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/03 13:45:00 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int cur;
	int fnd;

	cur = 0;
	while (cur < length)
	{
		i = 0;
		fnd = 0;
		while (i < length && !fnd)
		{
			if (i != cur)
				fnd = (tab[i] == tab[cur]) ? 1 : 0;
			i += 1;
		}
		if (!fnd)
			return (tab[cur]);
		cur += 1;
	}
	return (tab[cur]);
}
