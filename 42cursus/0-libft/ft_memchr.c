/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:29:42 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/07/30 21:29:52 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (n > a)
	{
		if (*(unsigned char *)(s + a) == (unsigned char)c)
		{
			return ((void *)(s + a));
		}
		a++;
	}
	return (NULL);
}
