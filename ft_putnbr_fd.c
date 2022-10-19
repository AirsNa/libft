/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:41:41 by anaji             #+#    #+#             */
/*   Updated: 2022/10/11 20:12:23 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-',fd);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10,fd);
		ft_putchar_fd(nb % 10 + '0',fd);
	}
	else
		ft_putchar_fd(nb % 10 + '0',fd);
}
/*
int main()
{
	int fd = open("t.txt",O_WRONLY | O_CREAT);
	ft_putnbr_fd(INT_MAX,fd);
}*/
