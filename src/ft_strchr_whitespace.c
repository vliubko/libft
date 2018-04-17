/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_whitespace.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vliubko <vliubko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:42:32 by vliubko           #+#    #+#             */
/*   Updated: 2018/04/17 13:46:46 by vliubko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr_whitespace(const char *s)
{
    int		i;

    i = 0;
    while (s[i])
    {
        if (WHITESPACE(s[i]))
            return ((char*)s + i);
        i++;
    }
    if (WHITESPACE(s[i]))
        return ((char*)s + i);
    return (NULL);
}
