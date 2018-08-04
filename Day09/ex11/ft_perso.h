/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:53:46 by nflouty           #+#    #+#             */
/*   Updated: 2018/08/03 14:48:56 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PERSO_H
# define __FT_PERSO_H

# include <string.h>
# define SAVE_AUSTIN_POWERS "asdasdasd"

typedef struct	s_perso
{
	char	*name;
	double	life;
	int		age;
	char	*profession;
}				t_perso;
#endif
