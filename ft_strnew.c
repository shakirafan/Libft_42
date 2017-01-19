#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	*tab;
	int		i;

	i = 0;
	tab = (size_t*)malloc(sizeof(*tab) * size);
	if (tab == NULL)
		return (0);
}

void	main(void)
{
	ft_strnew(3);
}
