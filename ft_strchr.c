/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:58:48 by anaji             #+#    #+#             */
/*   Updated: 2022/10/12 10:47:34 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int	i;
	char *str;

	str = (char *)s;
	i = 0;
	while(str[i])
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	if(str[i] == c)
        return str + i;
	return (0);
}
/*int main()
{
    //for()
    printf("%s",ft_strchr("abcd",'\0'));
}*/
