#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (needle[i] != '\0' || i < len)
	{
		if (haystack[i] == '\0')
			return((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}
