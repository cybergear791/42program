/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 11:59:50 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/28 12:22:09 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while ((i < len) && src[i])
	{
		dst[i] = src[i];
		i += 1;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}