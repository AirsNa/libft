/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:35:25 by anaji             #+#    #+#             */
/*   Updated: 2022/10/12 15:12:17 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	unsigned char c1;
	unsigned char c2;

	i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
        if (c2 == c1)
            i++;
        else 
            return (c1 - c2);
    }
    return (0);
}
/*
int main()
{
    printf("%d",ft_strncmp("abd","ad",3));
}*/
