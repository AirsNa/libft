#include "libft.h"

int w_len(const char *s,char c, int i)
{
	int	len;

	len =0;
	while(s[i] && s[i] != c)
	{	
		len++;
		i++;
	}
	return (len);
}

int	word_num(const char *s,char c,int i)
{
	int	num;

	num = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			num++;
			i = i + w_len(s,c,i);
		}
		else
			i++;
	}
	return(num);
}

char **ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		len;

	j = 0;
	i = 0;
	str = malloc((word_num(s,c,i) + 1) * sizeof(char *));
	if (!str)
		return NULL;
	while(s[i])
	{
		if(s[i] != c)
		{
			len = w_len(s,c,i);
			//malloc str[j]
			str[j] = malloc(len + 1);
			//copy s[i] -> str[j]
//>%c  ",a[i][j],a[i][j]);j++;			
			ft_memcpy(str[j],s+i,len);
			str[j][len] = '\0';
			//i <- len(str[j])
			i = i + len;
			//j++
			j++;
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}
/*
int main() {
	char	**expected = (char*[6]){"split  ", "this", "for", "me", "!", NULL};
	char	*s = "split  ||this|for|me|||||!|";
	int		i = 0;
	char	**result = ft_split(s, '|');

	while (result[i]) {
		if (strcmp(result[i], *expected)) {
			printf("khsrat\n");
			exit(1);
		}
		else
		{
			printf("sd9at\n");
		}
		free(result[i]);
		i++;
		expected++;
	}
	free(result);
	printf("khrjat\n");
	exit(2);
}*/

