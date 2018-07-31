/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 19:13:51 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/28 19:48:51 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (!n)
		return (0);
	while ((*s1 && (*s1 == *s2)) && --n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		spl += 1;
		s2 += 1;
	}
	return (*us1 - *us2);
}
