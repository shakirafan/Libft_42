/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 15:33:27 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/30 17:31:36 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	unsigned int index;
	char *tab;

	index = 0;
	i = 0;
	if((tab = (char *)malloc(sizeof(*tab) * (ft_strlen(s) + 1))) == NULL)
		return (NULL);
	while (s[i])
	{
		tab[i] = f(index, s[i]);
		index++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
