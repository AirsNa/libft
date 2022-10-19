/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:02:15 by anaji             #+#    #+#             */
/*   Updated: 2022/10/12 10:44:09 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

void *	ft_memchr(const void *s, int c, size_t n)
{
	size_t 	i;
	char 	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (0);
}
/*
int main()
{
    char  a[] = "ABCDaEFS";
    
    char *b = ft_memchr(a,'a',10);
    char *c = memchr(a,'a',10);
    printf("%s\n",b);
    printf("%s\n",c);
}*/
