/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 20:04:14 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/02 11:09:33 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int i;

	if (min > max)
		return nullptr; 
	int *size;
	size = (int*)malloc(sizeof(*size) * (max - min));
	i = 0;
	while (min < max)
	{
		size[i] = min;
		i++;
		min++;
	}
}
