/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:03:23 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/03/01 04:25:56 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	x;
	int	y;
	int	sonuc;

	x = 0;
	y = 1;
	sonuc = 0;
	while (str[x] <= 32)
		x++;
	while (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			y *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		sonuc = (sonuc * 10);
		sonuc = (str[x] - '0') + (sonuc);
		x++;
	}
	return (sonuc * y);
}
