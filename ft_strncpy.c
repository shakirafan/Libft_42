char *ft_strncpy(char *dest, const char *src, int n)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		if (i == n)
			return (dest);
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return(dest);
}
