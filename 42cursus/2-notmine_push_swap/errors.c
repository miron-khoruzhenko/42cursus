/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:56:48 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/09/03 15:57:49 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_errors(int err_num)
{
	if (err_num == 0)
		write(1, "Error\n", 6);
	else if (err_num == 1)
		write(1, "Error\n", 6);
	else if (err_num == 2)
		write(1, "Error\n", 6);
	else if (err_num == 3)
		write(1, "Error\n", 6);
	else if (err_num == 4)
		write(1, "Error\n", 6);
	exit(err_num);
}
