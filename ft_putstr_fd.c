/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:04:33 by anaji             #+#    #+#             */
/*   Updated: 2022/10/11 20:12:36 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <fcntl.h>

void ft_putstr_fd(char *s, int fd)
{
	write(fd,s,ft_strlen(s));
}/*
int main()
{
	int fd = open("t.txt",O_WRONLY | O_CREAT);
	ft_putstr_fd("test 1 2 3 ",fd);
}*/
