/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:11:18 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 21:11:19 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstrim(char const *s)
{
	int		start;
	int		i;
	char	*tab;
	char	*tab_2;

	tab_2 = (char *)&s;
	start = 0;
	i = 0;
	if (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
	{
		start++;
		i++;
	}
	tab = (char *)malloc(sizeof(*tab) * ft_strlen((char *)s));
	if (s[ft_strlen((char *)s) - 1] == ' ')
		tab[ft_strlen(tab) - 1] = '\0';
	ft_strcpy(tab, &s[start]);
	return (tab);
}
