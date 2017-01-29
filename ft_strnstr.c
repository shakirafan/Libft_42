/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:07:30 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 21:08:17 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (needle[i] != '\0' || i < len)
	{
		if (haystack[i] == '\0')
			return ((char*)&haystack[i]);
		i++;
	}
	return (NULL);
}
