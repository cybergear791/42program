/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 10:18:29 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/06 16:41:16 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *tmp;
	int i;

	i = 0;
	tmp = (int*)malloc(sizeof(int) * lenght);
	while (i < lenght)
	{
		tmp[i] = f(tab[i]);
		i++;
	}
	return (tmp);
}
