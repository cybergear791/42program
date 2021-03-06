/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 17:28:02 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/31 18:53:11 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')		//capitalizes first letter of word
			str[i++] -= 32;
		while (str[i] >= 'A' && str[i] <= 'Z')	// 
			str[i++] += 32;
		while (str[i] >= 'a' && str[i] <= 'z')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
			while (str[i] != ' ')
				i++;
		i++;
	}
	return (str);
}

int main()
{
	char test[] = "fFkFFF 566./f fd.5FF43/     ";
	printf("%s",ft_strcapitalize(test));
}
