/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 11:16:46 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/27 16:07:55 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a,int *b);


int main(){


int *a = malloc(sizeof(int));
*a = 10;
int *b = malloc(sizeof(int));
*b = 3;
ft_ultimate_div_mod(a,b);

printf("a = %d\n",*a);
printf("b = %d\n",*b);

}



void 	ft_ultimate_div_mod(int *a, int *b)
{
	int temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
