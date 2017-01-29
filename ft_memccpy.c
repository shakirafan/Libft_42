/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:33:30 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 21:52:39 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const char	*source;
	char		*destination;
	size_t		i;

	i = 0;
	source = src;
	destination = dest;
	while (i < n && source[i] != c)
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = source[i];
	return (dest);
}
