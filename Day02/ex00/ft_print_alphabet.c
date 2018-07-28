/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 12:22:31 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/25 16:40:01 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_alphabet(void)
{
	int i;
	i = 'a';

	while(i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
}

int main()
{
	ft_print_alphabet();
}
