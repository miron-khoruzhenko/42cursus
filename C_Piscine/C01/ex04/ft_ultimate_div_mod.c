/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:07:33 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/02/19 07:35:25 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	if (!(*b == 0))
	{
		x = (*a) / (*b);
		y = (*a) % (*b);
		*b = y;
		*a = x;
	}
}
