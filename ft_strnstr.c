/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:07:30 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/30 14:38:11 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t stock;
	size_t a;

	a = 0;
	i = 0;
	if (!needle)
		return ((char *)haystack);
	while (i < len)
	{
		if (haystack[a] == needle[a])
			stock = i;
		while(ft_strcmp(&haystack[a], &needle[a]) == 0)
		{
			if(needle[a] == '\0')
				return ((char *)&haystack[stock]);
			a++;
		}
		i++;
	}
	return (NULL);
}
