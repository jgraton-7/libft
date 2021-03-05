/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:36:32 by jgraton-          #+#    #+#             */
/*   Updated: 2021/03/05 21:32:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *n_list;
    t_list *end;
    
    end = NULL;
    while(lst)
    {
        n_list = ft_lstnew((f)(lst->content));
        ft_lstadd_back(&end, n_list);
    }
    return (end);
}
