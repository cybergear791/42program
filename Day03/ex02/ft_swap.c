/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 21:57:29 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/26 11:03:57 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
void 	ft_swap(int *a, int *b){

	int *temp = malloc(sizeof(int));
	*temp = *a;
	*a = *b;
	*b = *temp;

}


int main(){

int *a = malloc(sizeof(int));
*a = 1;
int *b = malloc(sizeof(int));
*b = 2;

printf("Before Swap\n");
printf("a is %d \n",*a);
printf("b is %d \n",*b);

ft_swap(a,b);
printf("After Swap\n");
printf("a is %d \n",*a);
printf("b is %d \n",*b);



}


