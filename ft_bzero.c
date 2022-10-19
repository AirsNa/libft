/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:06:18 by anaji             #+#    #+#             */
/*   Updated: 2022/10/11 20:06:06 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str =  (char *)s;
	i  = 0;
	while (i <  n)
	{
		str[i] = 0;
		i++;
	}
}
/*
int main()
{
	int a[5] = {'A','B','C','D','E'};
	int b[5] = {'A','B','C','D','E'};
	int *p = a;
	int *q = b;
	ft_bzero(a,8);
	bzero(b,8);
	int i = 0;
	while(i < 5)
	{
		printf("%d ",*p);
		p++;
		i++;
	}	
	printf("\n");
	i = 0;
	while(i < 5)
	{
		printf("%d ",*q);
		q++;
		i++;
	}
}*/
