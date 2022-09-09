/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:44:55 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/08/27 18:45:14 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_numlen(int num)
{
	int	len;

	len = 0;
	if (num == 0)
	{
		len = 1;
	}
	if (num < 0)
	{
		len++;
		num = -1 * num;
	}
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			nlen;
	char		*str;
	long int	num;

	nlen = 0;
	num = n;
	nlen = ft_numlen(n);
	str = (char *) malloc(nlen + 1);
	if (!str)
		return (0);
	str[nlen] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	nlen--;
	while (nlen >= 0 && num != 0)
	{
		str[nlen--] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
