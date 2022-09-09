/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:28:15 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/07/30 21:28:16 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lennum(int a)
{
	int	b;

	b = 0;
	if (a < 0)
		b++;
	else if (a == 0)
		return (1);
	while (a != 0)
	{
		a = a / 10;
		b++;
	}
	return (b);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		a;

	a = lennum(n);
	s = (char *)ft_calloc(a + 1, sizeof(char));
	if (!s)
		return (0);
	if (n == 0)
		*s = '0';
	else if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_strlcpy(s, "-2147483648", a + 1);
			return (s);
		}
		s[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		*(s + --a) = (n % 10) + '0';
		n = n / 10;
	}
	return (s);
}
