/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:30:14 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/03 11:31:36 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_is_present(char *str)
{
	char	*attack;
	char	*powers;
	char	*president;
	int		i;
	int		j;

	attack = "attack";
	powers = "powers";
	president = "president";
	i = 0;
	j = 0;
	if (ft_strcmp(str, attack) == 0)
		ft_putstr("Alert!!!\n");
	if (ft_strcmp(str, powers) == 0)
		ft_putstr("Alert!!!\n");
	if (ft_strcmp(str, president) == 0)
		ft_putstr("Alert!!!\n");
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
