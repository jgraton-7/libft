/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 18:57:52 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/25 15:17:04 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

t_list *ft_lstlast(t_list *lst)
{
	int count;
	int count2;

	count = ft_lstsize(lst);
	count2 = 0;
	while(count2  < count)
	{
		lst = lst->next;
		count++;
	}
	return(lst);
}
