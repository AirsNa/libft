/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 08:44:25 by anaji             #+#    #+#             */
/*   Updated: 2022/10/11 20:14:28 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char 	*str_join;

	j = 0;
	i = 0;
	str_join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str_join)
		return (0);
	while(s1[i])
	{
		str_join[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		str_join[j] = s2[i];
		i++;
		j++;
	}
	str_join[j] = '\0';
	return (str_join);
}
