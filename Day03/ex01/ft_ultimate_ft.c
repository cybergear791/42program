/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 21:34:42 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/27 14:44:23 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}


int main()
{
	int *********ptr = malloc(sizeof(int));

	*********ptr = 5;

	ft_ultimate_ft( ptr);

	printf("%d ", *********ptr);

	//free(ptr);
	return 0;
}
