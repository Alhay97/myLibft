/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalhamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:28:10 by aalhamel          #+#    #+#             */
/*   Updated: 2021/10/26 13:28:13 by aalhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
	{
	if (new)
	{
		if (lst)
		{
			new->next = *lst;
			*lst = new;
		}
		else
			 *lst = new;
	}
}
