/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 12:23:10 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/25 16:25:23 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar (int c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_numbers (void)
{
	int i;
    i = 0;
	while(i != 10)
	{
		ft_putchar(48 + i);
		i++;
	}
}

int main(void)
{
	ft_print_numbers();
}
