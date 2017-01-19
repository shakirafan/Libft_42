char	*ft_strcpy(char *dest, char const *src)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
