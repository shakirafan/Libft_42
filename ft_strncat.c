#include <stdlib.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int count;

	count = 0;
	i = 0;
	if (n == 0)
		return(dest);
	while (dest[i] != '\0')
		i++;
	dest[i] = src[count];
	count++;
	i++;
	while (count < n || src[count] == '\0')
	{
		dest[i] = src[count];
		count++;
		i++;
	}
	return(dest);
}
