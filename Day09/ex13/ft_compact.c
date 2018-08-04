/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 13:52:30 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/03 13:52:44 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int		i;
	int		j;

	i = 0;
	while (i < length)
	{
		while (*(tab + i))
			i += 1;
		j = i;
		length -= 1;
		while (j < length)
		{
			*(tab + j) = *(tab + j + 1);
			j += 1;
		}
	}
	return (length);
}
