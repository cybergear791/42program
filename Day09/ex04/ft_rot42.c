/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 21:58:38 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/02 22:05:44 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	rotate1(char test)
{
	test = test - 65;
	test = ((test + 42) % 26);
	test = test + 65;
	return (test);
}

char	rotate2(char test)
{
	test = test - 97;
	test = ((test + 42) % 26);
	test = test + 97;
	return (test);
}

char	rotate(char test)
{
	if (test >= 65 && test <= 90)
		return (rotate1(test));
	else if (test >= 97 && test <= 122)
		return (rotate2(test));
	else
		return (test);
}

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = rotate(str[i]);
		i++;
	}
	return (str);
}
