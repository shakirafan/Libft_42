/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:11:18 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/30 18:38:10 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		i;
	char	*tab;
	int	ft;

	ft = ft_strlen(s) - 1;
	start = 0;
	i = 0;
	if (s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
	{
		start++;
		i++;
	}
	if((tab = (char *)malloc(sizeof(*tab) * (ft_strlen(s) + 1))) == NULL)
		return (NULL);
	if ( tab[ft]  == ' ' || tab[ft] =='\t' || tab[ft] == '\n')
		tab[ft] = '\0';
	ft_strcpy(tab, &s[start]);
	return (tab);
}
