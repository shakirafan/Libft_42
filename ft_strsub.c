/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:09:07 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 22:59:00 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char 	*str;

	str = (char *)malloc(sizeof(*str) * len);
	ft_strncpy(str, &s[start], len);
	return (str);
}
