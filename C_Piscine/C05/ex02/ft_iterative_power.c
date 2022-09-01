/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 01:21:39 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/03/02 01:21:42 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	gecici;

	gecici = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (power - 1 > 0)
		{
			nb *= gecici;
			power--;
		}
		return (nb);
	}
}
