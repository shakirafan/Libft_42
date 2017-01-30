/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:09:07 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/30 18:05:07 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if((str = (char *)malloc(sizeof(*str) * (len + 1))) == NULL)
		return (NULL);
	ft_strncpy(str, &s[start], len);
	return (str);
}
