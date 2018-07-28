/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 16:47:02 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/26 17:56:27 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
	
void	ft_putnbr(int nb){

	//int ten = nb /10;
	//int temp = n%10;
	//ft_putchar(48 + nb);
	printf("%d",nb)
}

int main(){
	int i;
    i= 42;
	ft_putnbr(i);
}
