/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 13:58:00 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/26 14:23:30 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>


void	ft_strlen(char *str)
{

	printf("Your favorite  word has ");
	int count = 0;
	for(int i = 0; i < strlen(str); i++)
	{
		count++;
	}
	printf("%d digits",count);

}

int main()
{
	char *str = "fuck dis";

	ft_strlen(str);
}
