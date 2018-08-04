/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 20:04:27 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/02 20:50:03 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_generic(void)
{
	int i;
	char*str;

	str = "Tut tut ; Tut tut";
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i++]);
	}
	ft_putchar('\n');
}
