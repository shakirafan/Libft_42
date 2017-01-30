/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:05:52 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/30 17:12:29 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tab;

	if ((tab = (char*)malloc(sizeof(*tab) * (size + 1))) == NULL)
		return (NULL);
	tab[size ] = '\0';
	ft_memset(tab, '\0', size);
	return (tab);
}
