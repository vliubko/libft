/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pushback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vliubko <vliubko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 16:56:11 by vliubko           #+#    #+#             */
/*   Updated: 2018/05/15 17:22:04 by vliubko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lst_pushback(t_list **alst, t_list *new_node)
{
	if (!new_node || !alst)
		return ;
	while (*alst && (*alst)->next)
		alst = &(*alst)->next;
	if (*alst)
		(*alst)->next = new_node;
	else
		*alst = new_node;
}
