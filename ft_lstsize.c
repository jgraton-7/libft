/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 21:27:38 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/24 17:06:30 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef	struct	s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }				t_list;

int ft_lstsize(t_list *lst)
{
	int count;

	count = 0;
	while(lst = lst->next != NULL)
	{
		count++
	}
	return (count);
}
