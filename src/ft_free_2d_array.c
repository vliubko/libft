/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2d_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vliubko <vliubko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 13:58:14 by vliubko           #+#    #+#             */
/*   Updated: 2018/04/17 13:55:25 by vliubko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_free_2d_array(char **av)
{
	int		i;

	if (!av)
		return ;
	i = -1;
	while (av[++i])
		ft_strdel(&av[i]);
	free(av);
}
