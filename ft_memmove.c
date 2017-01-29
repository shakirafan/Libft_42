/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:41:21 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 20:42:21 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*source;
	char		*destination;

	source = src;
	destination = dest;
	i = 0;
	while (i < n || source[i] == '\0')
	{
		destination[i] = source[i];
		i++;
	}
	return ((char*)dest);
}
