/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 08:26:05 by anaji             #+#    #+#             */
/*   Updated: 2022/10/16 16:19:09 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t max_len;
	char *sub_str;
	size_t	s_len;

	s_len = ft_strlen(s);	
	i = 0;
	if (len > s_len)
		len = s_len;
	max_len = start + len;
	sub_str = malloc(len + 1); 
	if (!sub_str)
		return (0);
	while (s_len > start && start < max_len)
	{
		sub_str[i] = s[start];
		start++;
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
/*int main() {
    char *p = ft_substr("please help me!", 5, 5);
    if(!p)
        printf("error");
    printf("%s",p);

    return 0;
}*/
