/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:04:35 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 21:04:47 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, const char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i == n)
			return (dest);
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return(dest);
}
