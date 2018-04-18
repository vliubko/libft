/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pathjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vliubko <vliubko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:59:37 by vliubko           #+#    #+#             */
/*   Updated: 2018/04/18 17:00:39 by vliubko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_pathjoin(char *p1, char *p2)
{
	char	*tmp;
	char	*ret;

	if (!p2 || !p1)
		return (NULL);
	if (p1[ft_strlen(p1)] != '/')
		tmp = ft_strjoin(p1, "/");
	else
		tmp = ft_strdup(p1);
	ret = ft_strjoin(tmp, p2);
	ft_strdel(&tmp);
	return (ret);
}
