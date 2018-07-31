/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 19:51:48 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/28 17:26:17 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_recursive_power(int nb, int power){

	if(power>1)
	{
		nb*=ft_recursive_power(nb,power-1);
	}
	return nb;
}




int main() {

int nb =5;
int power = 3;
int result = ft_recursive_power(nb,power);
printf("5^3 = %d",result);
}
