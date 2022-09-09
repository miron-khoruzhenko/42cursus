/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:24:18 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/09/03 16:13:24 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_push *data, int size)
{
	if (data->stack_a[size] > data->stack_a[size + 1]
		&& data->stack_a[size + 1] > data->stack_a[size + 2])
	{
		ft_rotate(data, 'a');
		ft_swap(data, 'a');
	}
	else if (data->stack_a[size] > data->stack_a[size + 1]
		&& data->stack_a[size + 1] < data->stack_a[size + 2])
	{
		if (data->stack_a[size + 2] > data->stack_a[size])
			ft_swap(data, 'a');
		else
			ft_rotate(data, 'a');
	}
	else if (data->stack_a[size] < data->stack_a[size + 1]
		&& data->stack_a[size] > data->stack_a[size + 2])
		ft_revrotate(data, 'a');
	else
	{
		ft_revrotate(data, 'a');
		ft_swap(data, 'a');
	}
}

void	ft_sort(t_push *data)
{
	if (data->size == 2)
		ft_swap(data, 'a');
	else if (data->size == 3)
		sort_three(data, data->size_a);
	else
	{
		before_quicksort(data);
		if (!is_sorted(data->stack_a, data->size_a, data->size))
			sort_three(data, data->size_a);
		sort_process(data);
		while (!is_sorted(data->stack_a, data->size_a, data->size))
			ft_rotate(data, 'a');
		free(data->stack_b);
	}
}
