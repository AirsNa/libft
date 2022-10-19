/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:12:14 by anaji             #+#    #+#             */
/*   Updated: 2022/10/12 10:51:42 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *	ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	while (size >= 0)
	{
		if (s[size] == c)
			return ((char *)s + size);
		size--;
	}
	return (0);
}
/*int main(void)
{
	printf("ft = %s \t ori = %s",ft_strrchr("abecdefgh",'e'),strrchr("abecefgh",'e'));
}*/
