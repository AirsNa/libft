/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:47:35 by anaji             #+#    #+#             */
/*   Updated: 2022/10/12 11:23:25 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>


void *	ft_memcpy(void * dst, const void *src, size_t n)
{
	size_t	i;
	char *srcs;
	char *dest;

	i = 0;
	srcs = (char *)src;
	dest = (char *)dst;
	while(i < n && (srcs != 0 || dest != 0))
	{
		dest[i] = srcs[i];
		i++;
	}
	return (dst);
}
/*
int main()
{
	char a[10] = "ayzdef";
	char *b = a;
	char *c;
	c = (char *)ft_memcpy(b+2,b,3);
	printf("%s",c);
}*/
