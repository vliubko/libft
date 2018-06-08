/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_2dtab_to_3dtab.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vliubko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 20:07:15 by vliubko           #+#    #+#             */
/*   Updated: 2018/06/07 20:07:15 by vliubko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	***ft_convert_2dtab_to_3dtab(char **old)
{
	int		len;
	char	***ret;
	int		i;

	len = 0;
	while (old[len])
		len++;
	ret = (char***)malloc(sizeof(ret) * (len + 1));
	ret[len] = NULL;
	i = 0;
	while (i < len)
	{
		ret[i] = ft_strsplit_whitespaces(old[i]);
		i++;
	}
	return (ret);
}
