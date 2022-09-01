/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 01:20:52 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/03/02 01:20:55 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	sonuc;
	int	i;

	sonuc = 1;
	i = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		sonuc *= nb;
		nb--;
	}
	return (sonuc);
}
