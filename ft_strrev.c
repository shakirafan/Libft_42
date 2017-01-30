/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:08:28 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/30 09:55:52 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		end;
	int		start;
	int		swap;

	end = 0;
	start = 0;
	swap = 0;
	while (str[end] != '\0')
		end++;
	end--;
	while (end >= start)
	{
		swap = str[end];
		str[end] = str[start];
		str[start] = swap;
		end--;
		start++;
	}
	return (str);
}
