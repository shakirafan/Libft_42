/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:29:44 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/30 16:16:25 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*tab;
	int		test;

	test = 0;
	if((tab = (char *)malloc(sizeof(*tab) * size)) == NULL)
		return (NULL);
	ft_memset(tab, 0, size);
	return (tab);
}
