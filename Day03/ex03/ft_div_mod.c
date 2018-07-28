/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 21:59:52 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/27 15:35:44 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void ft_div_mod(int a, int b, int *div,int *mod);



int main(){

int a = 10;
int b = 4;
int *div = malloc(sizeof(int));
int *mod = malloc(sizeof(int));

ft_div_mod(a,b,div,mod);

printf("div = %d\n",*div);
printf("mod = %d\n",*mod);

}



void 	ft_div_mod(int a, int b, int *div, int *mod){

*div = a / b;
*mod = a % b;
}
