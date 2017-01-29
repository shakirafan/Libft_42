/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:11:56 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 21:12:13 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int a;
	int stock;

	i = 0;
	a = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[a])
			stock = i;
		while (haystack[i] == needle[a])
		{
			i++;
			a++;
			if (needle[a] == '\0')
				return ((char *)&haystack[stock]);
		}
		a = 0;
		stock = 0;
		i++;
	}
	return (0);
}
