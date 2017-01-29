#include "libft.h"

static int	ft_count_word(const char *s, char c)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			a++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (a);
}

static int	ft_count_letter(const char *s, char c, unsigned int start)
{
	int i;

	i = 0;
	while (s[start + i] != c && s[i])
		i++;
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	int i;
	int a;
	char **tab;

	i = 0;
	a = 0;
	if (!s || == 0)
		return (0);
	tab = (char**)malloc(sizeof(tab) * ft_count_word(s, c) + 1);
	tab[ft_count_word(s, c)] = NULL;
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[a] = (char*)malloc(sizeof(tab) * ft_count_letter(s, c, i));
			tab[a] = ft_strsub(s, i, ft_count_letter(s, c, i));
			a++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (tab);
}
