/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:29:44 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 20:31:18 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmalloc(size_t size)
{
	size_t	*tab;
	int		test;

	test = 0;
	tab = (size_t *)malloc(sizeof(*tab) * size);
	if (tab == NULL)
		return (NULL);
	return (tab);
}
