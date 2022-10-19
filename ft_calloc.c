/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:13:13 by anaji             #+#    #+#             */
/*   Updated: 2022/10/15 15:08:47 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *	ft_calloc(size_t count, size_t size)
{
	char *temp;
	void *p;
	size_t i;

	i = 0;
	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (0);
	p = malloc(count * size);
	if (!p)
		return (0);
	temp = (char *)p;
	while(i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (p);
}
/*
int main() {
    char *p = ft_calloc(5000000000000,4);
    if(!p)
        printf("error");
	else
	{
		printf("succes\n");
		for(int i=0;i<20;i++)
	printf("%d",p[i]);}
    return 0;
}*/
