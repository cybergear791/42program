/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 19:20:54 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/28 16:21:43 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int 	ft_iterative_factorial(int nb)
{
	if (nb > 12)
		return (0);

	int output = 1;

	while(nb > 1)
	{	
		output *= nb;	
		nb--;
	}	
	return output;
}


int main()
{
	int input = 13;
	input = ft_iterative_factorial(input);
	printf("13! is %d\n",input);

	int input2 = 5;
	input2 = ft_iterative_factorial(input2);
	printf("5! is %d",input2);

}
