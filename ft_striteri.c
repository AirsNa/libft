/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:35:34 by anaji             #+#    #+#             */
/*   Updated: 2022/10/16 14:14:03 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int     i;

    i = 0;
    while (s[i])
    {
        f(i,&s[i]);
        i++;
    }
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
