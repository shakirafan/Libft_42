/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 17:34:57 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 20:23:23 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int stock;
	int sign;

	i = 0;
	stock = 0;
	sign = 1;
	while (*(str + i) == '\v' ||
			*(str + i) == '\t' ||
			*(str + i) == '\r' ||
			*(str + i) == '\n' ||
			*(str + i) == ' ' ||
			*(str + i) == '\f')
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
		stock = stock * 10 + (*(str + i) - '0');
	return (stock * sign);
}
