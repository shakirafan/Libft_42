#include <stdlib.h>

void	*ft_memmalloc(size_t size)
{
	size_t *tab;
	int		test;

	test = 0;
	tab = (size_t *)malloc(sizeof(* tab) * size );
	if (tab == NULL)
		return (0);
}
