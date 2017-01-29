/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:36:33 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 21:57:57 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*destination;
	const char		*source;
	size_t			i;

	i = 0;
	destination = dest;
	source = src;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
