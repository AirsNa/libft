/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:12:25 by anaji             #+#    #+#             */
/*   Updated: 2022/10/15 12:57:59 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <limits.h>
#include <stdio.h>

int get_int_len(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		len = 1;
		nb = -nb;
	}
	while (nb != 0)
	{
		len ++;
		nb = nb / 10;
	}
	return (len);
}

int ft_abs(int a)
{
	if(a < 0)
		return (-a);
	return (a);
}

void fill_form(char **s,long nb, int len)
{
	int i=0;
	long n;

	n = nb;
	while(i < len)
	{
		s[0][len - i - 1] = ft_abs((nb % 10)) + '0';
		i++;
		nb = nb / 10;
	}	
	if (n < 0)
		s[0][0] = '-';
	s[0][i] = '\0';
}

char *ft_itoa(int n)
{
	int len;
	char *str;
	int i;

	i = 0;
	//int len
	len = get_int_len((long)n);	
	//alocate + 1 (\0)
	str = malloc(len + 1);
	if(!str)
		return (0);
	//copy
	fill_form(&str,(long)n,len);
/*	while(i < len)
	{
		str[i] = (n % 10) + '0';
		i++;
		n = n / 10;
	}*/
	return (str);
}
/*
int main()
{
	printf("%s=",ft_itoa(-1010));
//	int i   = -1002 % 10;
//	printf("%d",i);
}*/
