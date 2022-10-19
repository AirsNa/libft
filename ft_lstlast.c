/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:38:18 by anaji             #+#    #+#             */
/*   Updated: 2022/10/18 20:01:14 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return lst;
	while (lst->next)
		lst = lst -> next;
	return (lst);
}