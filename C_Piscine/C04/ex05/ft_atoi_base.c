/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:03:39 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/03/01 00:46:57 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base_cont(char *base)
{
	int	i;
	int	y;

	i = 0;
	while (base[i] != '\0')
	{
		y = i + 1;
		while (base[y] != '\0')
		{
			if (base[i] == base[y])
				return (0);
			y++;
		}
		if (base[i] == ' ' || base[i] == '\t' || base[i] == '\n'
			|| base[i] == '\v' || base[i] == '\f'
			|| base[i] == '\r' || base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int	ft_str_cont(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\n'
		|| str[*i] == '\v' || str[*i] == '\f'
		|| str[*i] == '\r')
		*i += 1;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
		{
			sign *= -1;
		}
		*i += 1;
	}
	return (sign);
}

int	ft_last_step(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	gecici;
	int	i;
	int	sonuc;
	int	sign;
	int	len;

	i = 0;
	sonuc = 0;
	len = ft_base_cont(base);
	while (len >= 2)
	{
		sign = ft_str_cont(str, &i);
		gecici = ft_last_step(str[i], base);
		while (gecici != -1)
		{
			sonuc = (sonuc * len) + gecici;
			i++;
			gecici = ft_last_step(str[i], base);
		}
		return (sonuc * sign);
	}
	return (0);
}
