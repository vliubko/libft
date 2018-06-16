/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var_dump.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vliubko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 11:00:46 by vliubko           #+#    #+#             */
/*   Updated: 2018/06/16 11:22:18 by vliubko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	var_dump(char **arr)
{
	int		i;

	i = 0;
	while (arr[i])
	{
		ft_putstr("arr[");
		ft_putnbr(i);
		ft_putstr("] = \"");
		ft_putstr(arr[i]);
		ft_putstr("\"");
		i++;
	}
	ft_putstr("\n");
}

void	var_dump_3d_tab(char ***arr)
{
	int		i;

	i = 0;
	while (arr[i])
	{
		ft_putstr("\nARRAY[");
		ft_putnbr(i);
		ft_putstr("]:\n");
		var_dump(arr[i]);
		ft_putstr("\n");
		i++;
	}
}
