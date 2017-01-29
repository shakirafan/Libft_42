/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:34:55 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 21:54:04 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*str;

	str = s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
