/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:31:08 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/07/30 21:31:09 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	rn;

	rn = n;
	if (rn < 0)
	{
		rn *= -1;
		write(fd, "-", 1);
	}
	if (rn > 9)
	{
		ft_putnbr_fd((rn / 10), fd);
		ft_putnbr_fd((rn % 10), fd);
	}
	else
		ft_putchar_fd((rn + '0'), fd);
}
