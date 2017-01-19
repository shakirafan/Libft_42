char *ft_strcat(char *dest, const char *src)
{
	int i;
	int a;

	a = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (dest);
}

