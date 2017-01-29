/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:03:39 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 21:03:54 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;

	i = 0;
		
	while (s[i] != '\0')
	{
		f(s[i]);	
		i++;
	}
	return (s);
}
