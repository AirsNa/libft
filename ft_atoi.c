/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:51:45 by anaji             #+#    #+#             */
/*   Updated: 2022/10/14 12:30:30 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <limits.h>

static int	pas_spaces(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	i = pas_spaces(str);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	while (str[i])
	{
		if (ft_isdigit(str[i]))
		{
			if (res * sign >= INT_MAX)
				return -1;
			if (res * sign <= INT_MIN)
				return 0;
			res = res * 10;
			res = res + (str[i] - '0');
		}
		else
			break;
		i++;
	}
	return (res * sign); 
}
/*
int main()
{
	printf("ft = %d\t ori = %d",ft_atoi("010"),
			atoi("99999999999999999999999999"));
}*/
