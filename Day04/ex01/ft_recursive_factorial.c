/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 19:28:50 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/26 19:36:47 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if(nb > 1)
	{
		nb*= ft_recursive_factorial(nb-1);	
	}
	return nb;
}


int main()
{
	int input = 6;
	input = ft_recursive_factorial(input);
	printf("6! is %d",input);

}
