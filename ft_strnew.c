/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:05:52 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 21:06:05 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*tab;
	int		i;

	i = 0;
	tab = (char*)malloc(sizeof(*tab) * size);
	if (tab == NULL)
		return (NULL);
	return (tab);
}
