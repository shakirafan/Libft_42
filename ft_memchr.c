#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;
	const unsigned char *str;

	str = s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
		{
			printf("%s", &str[i] );
			return((char *)&str[i]);
		}
		i++;
	}

}

