#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destination;
	const char	*source;
	int		i;

	i			= 0;
	destination	= dest;
	source		= src;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
}
