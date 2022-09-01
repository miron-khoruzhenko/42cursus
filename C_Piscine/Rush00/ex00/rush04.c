/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skel <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:35:14 by skel              #+#    #+#             */
/*   Updated: 2022/02/13 21:03:14 by skel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	extra(int x, int y, int a, int b)
{
	int	h;
	int	w;

	h = a;
	w = b;
	if ((h == 1 && w == 1))
		ft_putchar('A');
	else if ((h == y && w == 1) || (h == 1 && w == x))
		ft_putchar('C');
	else if ((h == y && w == x))
		ft_putchar('A');
	else if ((h == 1 || h == y) && (w != 1 || w != x))
		ft_putchar('B');
	else if (((w == 1 || w == x) && (h != 1 || h != y)))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	h;
	int	w;

	h = 1;
	while (h <= y)
	{
		w = 1;
		while (w <= x)
		{
			extra(x, y, h, w);
			w++;
		}
		ft_putchar('\n');
		h++;
	}
}
