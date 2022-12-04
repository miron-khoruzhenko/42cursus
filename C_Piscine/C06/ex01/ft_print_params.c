/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 23:24:15 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/03/02 23:24:38 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		write(1, &a[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (av[i] && i < ac)
	{	
		ft_putchar(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
