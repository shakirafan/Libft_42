/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:02:33 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/30 21:41:55 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char *tab;

	if((tab = (char *)malloc(sizeof(*tab) * (ft_strlen(s1)))) == NULL)
		return (NULL);
	tab = ft_strcat((char *)s1, s2);
	return (tab);
}
