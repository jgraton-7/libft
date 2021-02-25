/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:22:22 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/25 15:34:07 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list list;

	if(lst)
	{
		if(*lst)
		{
			list = ft_lstlast(*lst);
			list->next = new;
		}
		else
		{
			*lst = new;
		}
	}
}
