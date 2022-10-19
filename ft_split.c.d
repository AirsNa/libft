/* *************************************************************************	 */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:21:00 by anaji             #+#    #+#             */
/*   Updated: 2022/10/16 12:14:09 by anaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	len_word(char const *s,char c,int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

static int	num_word(const char *s,char c)
{
	int	i;
	int	word_count;
	int	word_len;

	word_count = 0;
	i = 0;
	while(s[i])
	{
		if(s[i] != c)
		{
			word_len = len_word(s,c,i);
			word_count++;
			i = i + word_len;
		}
		else
			i++;
	}
	return (word_count);
}

char **ft_split(char const *s, char c)
{
	int		j;
	int		i;
	char	**str;
	int		len;
	i = 0;
	j = 0;
	str = malloc((num_word(s,c) + 1) * sizeof(char *));
	if (!str)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			len = len_word(s,c,i);
			str[j] = malloc(len_word(s,c,i) + 1);
			if (!str[j]){
				free(str);return 0;}
			str[j] = ft_substr(s,i,len_word(s,c,i));
			i = i + len_word(s,c,i);
			j++;
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}
/*
int main()
{
	char *st = "split  ||this|for|me|||||!|";
	char sp = '|';
	int i=0;
	char **a = ft_split(st,sp);
	while(a[i])
	{
		 printf("at %d =>%s<-\n",i,a[i]);
        i++;
	}
	printf("%s\n",a[0]);
}*/
