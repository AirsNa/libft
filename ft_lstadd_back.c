/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 12:44:02 by anaji             #+#    #+#             */
/*   Updated: 2022/10/18 22:20:43 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

	tmp = *lst;
	if(!lst)
	{
		*lst = new;
		return ;
	}
	while (tmp -> next != NULL)
		tmp = tmp -> next;

	tmp -> next = new;
	new -> next = NULL;
}
