/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:04:31 by anaji             #+#    #+#             */
/*   Updated: 2022/10/19 11:24:20 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lenght;

	i = 0;
	j = 0;
	lenght = 0;
//	printf("len = %zu\n",len);
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (haystack == NULL && len == 0)
		return (NULL);
	lenght = ft_strlen(needle);
	while (haystack[i] && i + j < len)
	{
//		printf("at %d\n",i);
		if (haystack[i + j] == needle[j])
			j++;
		else
			j = 0;
		if(!j)
			i++;
		if (j == lenght)
			return ((char *)haystack + i);
	}
	return (NULL);
}
/*
int main()
{
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	size_t max = strlen(s2);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);

	printf("or = %s\nft = %s",i1,i2);

//	printf("%s",ft_strnstr(s1, s2, -1));
}*/
