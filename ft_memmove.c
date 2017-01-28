#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest,const void *src, size_t n)
{
	int			i;
	const char	*source;
	char		*destination;

	source = src;
	destination = dest;
	i = 0;
	while (i < n || source[i] == '\0')
	{
		destination[i] = source[i];
		i++;
	}
	return((char*)dest);
}
