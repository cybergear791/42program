/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 12:22:49 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/25 21:40:28 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_print_alphabet(void) {
	int num = 26;
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 25;
	while( i >=  0) {
		ft_putchar( alph[i]);
		i--;
	}
}

int main(){
ft_print_alphabet();
}
