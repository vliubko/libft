/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_whitespaces.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vliubko <vliubko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:39:42 by vliubko           #+#    #+#             */
/*   Updated: 2018/03/23 15:57:58 by vliubko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		ft_nword(char *str)
{
	int space_count;
	int i;

	space_count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(WHITESPACE(str[i])))
		{
			if (!(WHITESPACE(str[i + 1])) || str[i + 1] == '\0')
				space_count++;
		}
		i++;
	}
	return (space_count);
}

static int		ft_wlen(char *str, int i)
{
	int	char_count;

	char_count = 0;
	while (str[i])
	{
		if (!(WHITESPACE(str[i + 1])) || (str[i + 1] != 0))
			char_count++;
		else
			break ;
		i++;
	}
	return (char_count);
}

char			**ft_strsplit_whitespaces(char const *s)
{
	char	**hand;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!s || !(hand = (char**)malloc(sizeof(s) * (ft_nword((char*)s) + 1))))
		return (NULL);
	while (s[i])
	{
		if (WHITESPACE(s[i]))
			i++;
		else
		{
			if (!(hand[j] = ft_strnew(ft_wlen((char*)s, i) + 1)))
				return (NULL);
			k = 0;
			while (!(WHITESPACE(s[i])) && s[i] != '\0')
				hand[j][k++] = s[i++];
			hand[j++][k] = '\0';
		}
	}
	hand[j] = NULL;
	return (hand);
}
