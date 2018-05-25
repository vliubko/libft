/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vliubko <vliubko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:13:44 by vliubko           #+#    #+#             */
/*   Updated: 2017/11/13 17:00:34 by vliubko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *temp_ptr;
	char *ptr;

	if (s == NULL || start > ft_strlen(s))
		return (NULL);
	if (!(temp_ptr = ft_strnew(len + 1)))
		return (NULL);
	ptr = temp_ptr;
	while (len-- > 0 && s[start] != '\0')
	{
		*temp_ptr = s[start];
		start++;
		temp_ptr++;
	}
	*temp_ptr = '\0';
	return (ptr);
}
