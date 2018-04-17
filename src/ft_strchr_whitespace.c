//
// Created by Vadym LIUBKO on 4/17/18.
//

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