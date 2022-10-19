/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:51:34 by anaji             #+#    #+#             */
/*   Updated: 2022/10/11 19:13:28 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
	int fd = open("t.txt",O_WRONLY | O_CREAT);
	ft_putchar_fd('a',fd);
}*/
