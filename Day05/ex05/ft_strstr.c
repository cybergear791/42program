/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 12:23:54 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/28 12:46:58 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return (&str[i]);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && to_find[j])
			j += 1;
		if (!to_find[j])
			return (&str[i]);
		j += 0;
		i += 1;
	}
	return ;
}
