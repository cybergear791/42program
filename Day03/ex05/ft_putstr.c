/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 13:58:00 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/27 16:27:51 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>


void	ft_putstr(char *str)
{
	printf("Your favorite word is ");

	for(int i = 0; i < strlen(str); i++)
	{
		printf("%c",str[i]);
	}
}

int main()
{
	char *str = "fuck dis";
	ft_putstr(str);
}
