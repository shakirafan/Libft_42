#include <string.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const char	*source;
	char		*destination;
	int			i;
	
	i = 0;
	source = src;
	destination = dest;
	while(i < n && source[i] != c)
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = source[i];
	return(dest);
}

