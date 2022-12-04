/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:07:55 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/02/16 16:43:14 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putstr(char *str)
{
	unsigned int	iter;

	iter = 0;
	while (str[iter] != '\0')
	{
		ft_putchar(str[iter]);
		iter++;
	}
}
