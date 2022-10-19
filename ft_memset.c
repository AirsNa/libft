/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:07:45 by anaji             #+#    #+#             */
/*   Updated: 2022/10/15 15:09:14 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
    
void *  ft_memset(void *b, int c, size_t len)
{
    size_t i;
    i = 0;
    char *str;
    str = (char *)b;
    while(i < len)
    {
       str[i] = c;
       i++;
    }
    return (b);    
}
/*
int main()
{
    int a[5] = {1,2,3,4,5};
    
    ft_memset(a,1,20);
    for (int i=0;i<5;i++)
        printf("%d\t",a[i]);

}*/
