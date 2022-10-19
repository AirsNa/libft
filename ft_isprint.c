/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:33:47 by anaji             #+#    #+#             */
/*   Updated: 2022/10/12 16:11:46 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_isprint(int c)
{
//	unsigned char character;

//	character = (unsigned char) c;
//	if (character > 31 && character < 127)
	if (c > 31 && c < 127)
	{
		return (1);
	}
	return (0);
}
