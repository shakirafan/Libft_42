/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:33:30 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/30 11:52:04 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return ((unsigned char*)dest);
	while  (i < n)
	{
		((unsigned char *)dest)[i] = ((const char *)src)[i];
		if (((unsigned char *)dest)[i] == (unsigned char)c)
			return ((unsigned char *)&dest[i]);
		i++;
	}
	return (NULL);
}
