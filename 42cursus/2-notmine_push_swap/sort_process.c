/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:30:10 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/09/03 16:26:55 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_fnhook(int c, void (*fn)(t_push*, char), t_push *d, char check)
{
	int	i;

	i = 0;
	while (i < c)
	{
		fn(d, check);
		i++;
	}
}

void	ft_sortmove_a(t_push *data, int index_a, int index_b)
{
	if (index_b > 0)
	{
		if (index_a < index_b)
		{
			ft_sort_fnhook(ft_abs(index_a), &ft_rotate, data, 'x');
			ft_sort_fnhook(index_b - index_a, &ft_rotate, data, 'b');
		}
		else
		{
			ft_sort_fnhook(ft_abs(index_b), &ft_rotate, data, 'x');
			ft_sort_fnhook(index_a - index_b, &ft_rotate, data, 'a');
		}
	}
	else
	{
		ft_sort_fnhook(ft_abs(index_b), &ft_revrotate, data, 'b');
		ft_sort_fnhook(index_a, &ft_rotate, data, 'a');
	}
}

void	ft_sortmove_b(t_push *data, int index_a, int index_b)
{
	if (index_b < 0)
	{
		if (index_a < index_b)
		{
			ft_sort_fnhook(ft_abs(index_b), &ft_revrotate, data, 'x');
			ft_sort_fnhook(ft_abs(index_b - index_a),
				&ft_revrotate, data, 'a');
		}
		else
		{
			ft_sort_fnhook(ft_abs(index_a), &ft_revrotate, data, 'x');
			ft_sort_fnhook(ft_abs(index_a - index_b),
				&ft_revrotate, data, 'b');
		}
	}
	else
	{
		ft_sort_fnhook(index_b, &ft_rotate, data, 'b');
		ft_sort_fnhook(ft_abs(index_a), &ft_revrotate, data, 'a');
	}
}
