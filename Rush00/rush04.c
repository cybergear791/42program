/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 22:27:15 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/28 23:03:31 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	part1(int x)
{
	int i;

	ft_putchar('A');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

void	part2(int x, int y)
{
	int w;
	int i;

	i = 0;
	while (i < y - 2)
	{
		ft_putchar('B');
		w = 0;
		while (w < x - 2)
		{
			ft_putchar(' ');
			w++;
		}
		ft_putchar('B');
		ft_putchar('\n');
		i++;
	}
	ft_putchar('C');
}

void	part3(int x)
{
	int i;

	i = 0;
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('A');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else if (x == 0 && y == 0)
		return ;
	else if (x == 0 || y == 0)
		return ;
	else
	{
		part1(x);
		part2(x, y);
		part3(x);
	}
}
