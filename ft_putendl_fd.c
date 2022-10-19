/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:08:31 by anaji             #+#    #+#             */
/*   Updated: 2022/10/16 14:13:37 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <fcntl.h>

void ft_putendl_fd(char *s, int fd)
{
	write(fd,s,ft_strlen(s));
	ft_putchar_fd('\n',fd);
}/*
int main()
{
	int fd = open("t.txt",O_WRONLY | O_CREAT);
	ft_putendl_fd("test 1 2 3 ",fd);
}*/
