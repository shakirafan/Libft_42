/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:11:56 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/30 20:39:53 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int a;
	int stock;

	i = 0;
	a = 0;
	if (!little)
		return ((char *)big);
	while (big[i] != '\0')
	{
		if (big[i] == little[a])
			stock = i;
		while (big[i] == little[a])
		{
			if (little[a] == '\0')
				return ((char *)&big[stock]);
			i++;
			a++;
		}
		stock = 0;
		a = 0;
		i++;
	}
	return (NULL);
}
