/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 14:15:32 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/31 19:57:52 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[argc - i]);
		i++;
		ft_putchar('\n');
	}
	return (0);
}
