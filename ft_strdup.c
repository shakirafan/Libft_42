/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:55:28 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 22:39:55 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char *string;
	int i ;

	i = 0;
	string = (char *)malloc(sizeof(*string) * ft_strlen(src) + 1);
	if (string == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		string[i] = src[i];
		i++;
	}
	string[i] = '\0';
	return (string);

}
