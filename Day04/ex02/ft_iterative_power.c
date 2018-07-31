/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 19:40:01 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/28 17:15:07 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
	int num = nb;
	for(int i =1; i < power; i++)
	{
		nb*=num;
	}
	return nb;
}

int main() {

int nb =5;
int power = 3;
int result = ft_iterative_power(nb,power);
printf("5^3 = %d",result);
}
