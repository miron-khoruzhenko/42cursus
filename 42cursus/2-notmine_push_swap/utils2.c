/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:55:45 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/09/03 16:31:08 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_movecount(int start, int size, int index)
{
	if (index == start)
		return (0);
	if (index - start <= (size - start) / 2)
		return (index - start);
	return (index - size);
}

int	ft_get_totalmove(t_push *d, int i, int *index_a)
{
	int	count;

	*index_a = ft_array_minidx(d->stack_a, d->size_a, d->size, d->stack_b[i]);
	count = ft_abs(ft_get_movecount(d->size_b, d->size - 3, i));
	count += ft_abs(ft_get_movecount(d->size_a, d->size, *index_a));
	return (count);
}

int	ft_array_minidx(int *stack, size_t begin, size_t size, int start)
{
	int		min;
	size_t	i;

	i = begin - 1;
	while (++i < size)
	{
		if (stack[i] > start)
		{
			min = i;
			break ;
		}
	}
	while (++i < size)
		if (stack[i] > start && stack[i] < stack[min])
			min = i;
	return (min);
}
