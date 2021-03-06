/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalbeza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:26:20 by aalbeza           #+#    #+#             */
/*   Updated: 2017/01/29 20:26:28 by aalbeza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	else
		return (0);
}
