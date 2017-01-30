/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:50:05 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/30 20:10:03 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;
	size_t	ft;

	ft = ft_strlen(s);
	i = 0;
	if (c == '\0')
		return ((char*)&s[ft]);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = (char*)&s[i];
			return (ptr);
		}
		i++;
	}
	return (NULL);
}
