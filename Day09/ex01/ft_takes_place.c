/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 20:12:15 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/02 21:16:33 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	newhour(int hour)
{
	int pm;

	pm = 0;
	if (hour == 12)
		pm = 1;
	if (hour > 12)
	{
		hour -= 12;
		pm = 1;
	}
	if (pm == 1)
		printf("%d.00 P.M..\n", hour);
	else
		printf("%d.00 A.M..\n", hour);
}

void	ft_takes_place(int hour)
{
	int pm;

	pm = 0;
	if (hour > 12)
	{
		hour -= 12;
		pm = 1;
	}
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d", hour);
	if (pm == 1)
		printf(".00 P.M. AND ");
	else
		printf(".00 A.M. AND ");
	newhour(hour + 1);
}
