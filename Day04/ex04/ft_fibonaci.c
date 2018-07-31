/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonaci.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 20:02:00 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/28 19:23:24 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_fibonacci(int index){

	if(index < 0)
		return -1;
	else if(index <= 1)
		return index;
	return ft_fibonacci(index-1) + ft_fibonacci(index-2);
}

int main(){

int index = 6;
printf("%d",ft_fibonacci(index));
}
