/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 08:57:09 by anaji             #+#    #+#             */
/*   Updated: 2022/10/16 16:27:49 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t start_of_text(const char *s1, const char *set)
{
    size_t	i_start;

    i_start = 0;
    size_t i=0,j=0;
    size_t s_s1=ft_strlen(s1),s_set=ft_strlen(set);

    while(i<s_s1)
    {
	j = 0;
	while(j<s_set)
	{
	    if(s1[i_start] == set[j])
	    {
			i++;
			i_start++;
			j = -1;
	    }
	    if (i != i_start)
			return i_start;
	    j++;
	}
	i++;
    }
    return (i_start);
}

size_t end_of_text(const char *s1,const char *set)
{
    size_t i_end = 0;
    size_t j;
    size_t i;
    size_t s_s1 = ft_strlen(s1);
    size_t s_set = ft_strlen(set);
    i = s_s1 - 1;
    i_end = s_s1 - 1;

    while(i > 0)
    {
	j = 0;
	while(j<s_set)
	{
	    if(s1[i_end] == set[j])
	    {
			i--;
			i_end--;
			j = -1;
	    }
	    if (i != i_end)
	    	return i_end;
		j++;
	}
	i--;
    }
    return i_end;
}


char *ft_strtrim(char const *s1, char const *set)
{
	char *s;
	size_t	start_txt;
	size_t end_txt;
	size_t	len;

	start_txt = start_of_text(s1, set);
	if (start_txt == ft_strlen(s1))
		return ("");
	end_txt = end_of_text(s1, set);
	len = end_txt - start_txt + 1;

	s = ft_substr(s1,start_txt,len);
	return(s);
}
/*
int main()
{
	
	char *c = "his hey is a test hey";
	int st = start_of_text(c," hey");
	int ed = end_of_text(c," hey");
	printf("text start at %d with s[%d] = %c\n",st,st,c[st]);
	printf("text end at %d with s[%d] = %c\n",ed,ed,c[ed]);
	printf("result is :%s",ft_strtrim(c,"hey"));
}*/
