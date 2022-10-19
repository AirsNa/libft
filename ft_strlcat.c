/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 12:28:03 by anaji             #+#    #+#             */
/*   Updated: 2022/10/15 15:09:31 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

size_t	 ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	the_lenght;

	dst_len = 0;
	i = 0;
	if (dst)
		dst_len = ft_strlen((const char *)dst);
	the_lenght = dst_len + ft_strlen(src);
	if (dstsize <= dst_len || dstsize == 0)
		return (ft_strlen(src) + dstsize);
	dstsize -= (dst_len + 1);
	while (src[i] &&  dstsize > 0)
	{
		dst[dst_len] = src[i];
		i++;
		dst_len++;
		dstsize--;
	}
	dst[dst_len] = '\0';
	return (the_lenght);
}
/*
int main()
{
	char dst1[10] = "KKK";
	char dst2[10] = "KKK";
	printf("stf_res = %ld dst = %s\n",ft_strlcat(dst1,"abcde",12),dst1);
	printf("ori_res = %zu dst = %s\n",strlcat(dst2,"abcde",12),dst2);

	char b[0xF] = "nyan !";

	int a = ft_strlcat(((void *)0), b, 0);
	printf("%d",a);
}*/
