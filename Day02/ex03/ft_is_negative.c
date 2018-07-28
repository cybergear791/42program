/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 12:23:23 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/26 21:03:05 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_is_negative(int n){
	if(n >= 0)
		printf("P\n");
	else (n ==5)
		printf("N\n");
}

int main(){
int num = 5;
ft_is_negative(num);

int num2 = -5;
ft_is_negative(num2);
}
