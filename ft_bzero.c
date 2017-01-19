#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*cast;
	int		i;

	cast = s;
	i = 0;
	while (i <= n)
	{
		cast[i] = '\0';
		i++;
	}
}
