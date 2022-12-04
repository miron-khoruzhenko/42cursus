/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:32:09 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/09/03 15:34:19 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_move(t_push *data, int index_a, int index_b)
{
	if (index_a > 0)
		ft_sortmove_a(data, index_a, index_b);
	else
		ft_sortmove_b(data, index_a, index_b);
	ft_push(data, 'a');
}

void	sort_process(t_push *data)
{
	int	i;
	int	idx_a;
	int	idx_b;
	int	tmpidx_a;
	int	count;

	while (data->size_b < data->size - 3)
	{
		i = data->size_b - 1;
		count = MAX_INT;
		while (++i < data->size - 3)
		{
			if (count > ft_get_totalmove(data, i, &tmpidx_a))
			{
				count = ft_get_totalmove(data, i, &tmpidx_a);
				idx_a = tmpidx_a;
				idx_b = i;
			}
		}
		ft_sort_move(data, ft_get_movecount(data->size_a, data->size, idx_a),
			ft_get_movecount(data->size_b, data->size - 3, idx_b));
	}
}

void	before_quicksort(t_push *data)
{
	int	pivot;

	while (data->size_b > 0)
	{
		pivot = ft_array_pivot(data->stack_a, data->size_a, data->size);
		if (data->stack_a[data->size_a] < pivot)
			ft_push(data, 'b');
		else
		{
			if (data->stack_a[data->size - 1] < pivot)
				ft_revrotate(data, 'a');
			else
				ft_rotate(data, 'a');
		}
	}
}
