/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:22:22 by jgraton-          #+#    #+#             */
/*   Updated: 2021/03/04 17:19:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *list;

	if (lst)
	{
		if (*lst)
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
