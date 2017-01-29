/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:35:40 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 20:36:02 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((i < n) && s1)
	{
		if (s1 > s2)
			return (s1 - s2);
		if (s1 < s2)
			return (s1 - s2);
		i++;
	}
	return (0);
}