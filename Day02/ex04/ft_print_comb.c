/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 12:20:28 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/25 20:02:46 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void ft_print_comb(void){

	int i;
   	i = 0;
	while(i <= 7)
	{
		int j;
	   	j = i + 1;
		while(j <= 8)
		{
			int k;
			k = j + 1;
			while(k <= 9)
			{

				ft_putchar(48 + i);
				ft_putchar(48 + j);
				ft_putchar(48 + k);
				ft_putchar(' ');
				k++;
			}
			j++;
		}
	i++;
	}
}
int main()
{
ft_print_comb();
}
