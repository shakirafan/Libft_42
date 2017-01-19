char	*ft_strrchr(const char *s, int c)
{
	int i;
	int a;
	char  *ptr;

	i = 0;
	a = 0;
	
	while (s[i] != '\0')
		i++;
	while (a <= i)
	{
		if (s[i] == c)
		{
			ptr = (char*) &s[i];
			return (ptr);
		}
		i--;
	}
}
