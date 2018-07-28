/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 16:47:02 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/26 14:36:14 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>
using namespace std;

void	ft_putnbr(int nb){

	cout<<nb;
}

int main(){
	int i;
	cout<<"Enter any number: ";
	cin >> i;
	ft_putnbr(i);
}
