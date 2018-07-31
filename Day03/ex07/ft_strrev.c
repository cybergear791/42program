/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 13:58:00 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/28 13:26:06 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>


char	*ft_strrev(char *str)
{
//	printf("Your favorite word reversed is ");

	char str2;

	for(int i = 1; i < strlen(str) ; i++)
	{
		str2[i] = str[strlen(str)-i];
	}

	return str2;
}

int main(){

	char *str = "fuckdis";
	for(int i = 0; i < strlen(str); i++)
	{
		printf("%c",ft_strrev(str)[i]);
	}
}
