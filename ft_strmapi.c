/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:23:28 by anaji             #+#    #+#             */
/*   Updated: 2022/10/12 13:06:24 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*char fun(unsigned int i, char c)
{
	c = 'a';
	return (c);
}*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	str = malloc(ft_strlen(s) + 1);
	if(!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i,s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	char (*f)(unsigned int,char);
	f = fun;

	char *a;
	a = ft_strmapi("abcdef",f);
	printf("%s",a);
}*/
