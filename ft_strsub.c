#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char 	*str;

	str = (char *)malloc (sizeof(*str) * len);
	ft_strncpy(str, &s[start], len);
	return (str);
}
