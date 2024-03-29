/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:51:45 by anaji             #+#    #+#             */
/*   Updated: 2022/11/03 12:24:33 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	pas_spaces(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	return (i);
}

static	int	get_sign(const char *str, int *i)
{
	int	sign;

	sign = 1;
	if (str[*i] == '-')
	{	
		sign = -1;
		(*i)++;
	}
	else if (str[*i] == '+')
	{
		sign = 1;
		(*i)++;
	}
	return (sign);
}

static	int	init(const char *s, unsigned long long *res, int i)
{
	int	num_len;

	num_len = 0;
	*res = 0;
	while (s[i] && s[i] == '0')
		i++;
	while (s[i])
	{
		if (ft_isdigit(s[i]))
		{
			num_len++;
		}
		else
			break ;
		i++;
	}
	return (num_len);
}

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	res;
	int					sign;
	int					len;

	i = pas_spaces(str);
	sign = get_sign(str, &i);
	len = init(str, &res, i);
	if (len > 19 && sign == 1)
		return (-1);
	if (len > 19 && sign == -1)
		return (0);
	while (str[i])
	{
		if (ft_isdigit(str[i]))
		{
			res = res * 10;
			res = res + (str[i] - '0');
		}
		else
			break ;
		i++;
	}
	return (res * sign);
}
