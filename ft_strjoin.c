/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:02:33 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 21:02:42 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char *tab;

	ft_strcat((char *)s1, s2);
	tab = (char *)malloc(sizeof(*tab) * ft_strlen((char *)s1)+ 1);
	ft_strcpy(tab, s1);
	return (tab);
}
