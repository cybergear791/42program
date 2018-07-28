/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 15:26:48 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/27 12:25:43 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ft_sort_integer_table(int *tab, int size)
{
	int i = 0;
	int j = 0;;

	while( i < size)
	{
		j = i + 1;
		while(j < size) 
		{
				if(tab[i] > tab[j])
				{ //swap
					int *temp = malloc(sizeof(int));
				   	*temp = tab[i];
					tab[i] = tab[j];
					tab[j] = *temp;
				}
				j++;
		}
		i++;
	}
}


int main()
{	
	int arr[5]= {9,2,7,5,4};
	int *tab = arr;	
	int size = 5;
	ft_sort_integer_table(tab, size);
	
	for(int i = 0;i < size; i++)
	{
		printf("%d ", tab[i]);
	}

}
