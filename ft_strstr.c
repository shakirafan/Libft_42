char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int a;
	int stock;

	i = 0;
	a = 0;
	while(haystack[i] != '\0')
	{
		if (haystack[i] == needle[a])
			stock = i;
		while(haystack[i] == needle[a])
		{
			i++;
			a++;
			if(needle[a] == '\0')
				return((char *)&haystack[stock]);
		}
		a = 0;
		stock = 0;
		i++;
	}
	return (0);
}
