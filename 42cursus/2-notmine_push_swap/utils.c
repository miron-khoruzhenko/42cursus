/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:10:58 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/09/03 15:20:21 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_array_pivot(int *stack, int start, int size)
{
	unsigned long long	sum;
	int					i;

	sum = 0;
	i = 0;
	while (start < size)
	{
		sum += stack[start];
		start++;
		i++;
	}
	return (sum / i);
}

int	ft_min(int *stack, int start, int size)
{
	int	min;

	min = stack[start];
	while (start < size)
	{
		if (min > stack[start])
			min = stack[start];
		start++;
	}
	return (min);
}

int	ft_max(int *stack, int start, int size)
{
	int	max;

	max = stack[start];
	while (start < size)
	{
		if (max < stack[start])
			max = stack[start];
		start++;
	}
	return (max);
}

int	ft_isnum(char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

int	ft_abs(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}
