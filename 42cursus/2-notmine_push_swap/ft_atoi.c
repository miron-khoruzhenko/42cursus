/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:54:10 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/09/03 16:17:10 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check(long int n)
{
	if (n < -2147483648)
		ft_errors(3);
	if (n > 2147483647)
		ft_errors(4);
	return ((int)n);
}

int	ft_atoi_real(const char *str, int *num, int minus)
{
	int			i;
	long int	res;
	int			count;

	i = -1;
	res = 0;
	count = 0;
	while (str[++i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		;
	if (!str[i])
		return (i);
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			minus *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		count++;
		res = (res * 10) + (str[i++] - '0') * minus;
	}
	*num = check(res);
	if (!count)
		ft_errors(0);
	return (i);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			s;
	int			count;

	i = -1;
	s = 1;
	count = 0;
	while (str[++i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		;
	if (!str[i])
		return (i);
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			s *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		count++;
		i++;
	}
	if (!count)
		ft_errors(0);
	return (i);
}
