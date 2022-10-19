/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:15:08 by anaji             #+#    #+#             */
/*   Updated: 2022/10/17 22:52:37 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*temp;
	
	temp = malloc(sizeof(t_list));
	if (!temp)
		return (0);
	temp->content = content;
	temp->next = NULL;

	return (temp);
}
