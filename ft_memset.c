#include <string.h>

void	*ft_memset(void* s, int c, size_t n)
{
	char	*cast ;
	int	i;

	cast = s;
	i = 0;
	while(i < n)
	{
		cast[i] = c;
		i++;
	}
	return (s);
}
