/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 08:58:35 by anaji             #+#    #+#             */
/*   Updated: 2022/10/12 18:11:56 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *  ft_memmove(void *dst, const void *src, size_t len)
{
    size_t	i;
    char	*dest;
    char	*srcs;

    srcs = (char *)src;
    dest = (char *)dst;
    i = 0;
	if (&dest[0] <= &srcs[0])
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
    	while(i < len)
    	{
        	dest[len - i - 1] = srcs[len - i - 1];
        	i++;
   	 	}
	}
    return (dst);
}
/*
int main()
{
    char a[20] = "abcdefgh";
    char b[20] = "abcdefgh";
    char *p,*p1;
    p = a;
    p1 = b;
    char *q = ft_memmove(p+1,p,10);
    char *q1 = memmove(p1+1,p1,10);
    
    // while (*q)
    // {
    //     printf("%c ",*q);
    //     q++;
    // }  
    printf("%s\n",q);
    printf("%s",q1);
    
}*/
