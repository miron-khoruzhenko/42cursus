/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:26:26 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/07/30 21:26:36 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				a;
	int				b;
	long long int	hesap;

	a = 0;
	b = 1;
	hesap = 0;
	while (str[a] == 32 || (str[a] >= '\t' && str[a] <= '\r'))
		a++;
	if (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			b *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		hesap = (hesap * 10) + (str[a] - 48) * b;
		if (hesap > 2147483647)
			return (-1);
		else if (hesap < -2147483648)
			return (0);
		a++;
	}
	return (hesap);
}
