/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:30:01 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/07/30 21:30:02 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		if (*(unsigned char *)(s1 + a) != *(unsigned char *)(s2 + a))
		{
			return (*(unsigned char *)(s1 + a) - *(unsigned char *)(s2 + a));
		}
		a++;
	}
	return (0);
}
