/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 21:20:46 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/27 11:26:49 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_is_prime(int nb)
{
	for(int num = 2; num < nb; num++)
		for(int j = 2; j < nb;j++)
			if(j * num == nb) 	//if nb can be multiplied into by two numbers
				return 0; //not prime
	return 1;//if the program cant find two numbers to multiply into nb then nb is prime 
}

int main() 
{
	printf("%d",ft_is_prime(11));
}
