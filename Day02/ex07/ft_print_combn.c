/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 12:20:28 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/25 20:37:02 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void ft_print_comb(int n){
	int f = 0;
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
			if(n == 2){
				ft_putchar(48 + i);
				ft_putchar(48 + j);
				ft_putchar(' ');
				f = 1;
			}
			if(f == 0){
				while(k <= 9)
				{
					if(n == 3){
					ft_putchar(48 + i);
					ft_putchar(48 + j);
					ft_putchar(48 + k);
					ft_putchar(' ');
					}
					k++;
					
				}
			}
			j++;
		}
	i++;
	}
}
int main()
{
int n;
printf("Enter a number between 0 and 10: ");
n = getchar();
//ft_putchar( n);
ft_print_comb(n);
}
