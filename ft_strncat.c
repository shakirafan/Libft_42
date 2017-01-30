/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 09:51:20 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/30 13:06:50 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	size_t	a;
	size_t	count;

	count = 0;
	i = 0;
	a = 0;
	while (dest[i])
		i++;
	dest[i] = src[a];
	while (a < n)
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
		return (dest);
}
