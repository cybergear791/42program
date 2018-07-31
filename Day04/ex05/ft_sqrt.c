/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 20:37:43 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/27 14:50:19 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <math.h>
#include <stdio.h>

int 	ft_sqrt(int nb)
{
	for(int num = 1; num < nb; num++)
		if(num * num == nb)
			return num; 
	return 0; //input does not have a sqrt

}

int 	main()
{
	printf("%d",ft_sqrt(5));
}
