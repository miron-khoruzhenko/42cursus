/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 01:22:37 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/03/02 01:22:39 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (0);
	if (nb > 2147395600)
		return (0);
	while (i * i < nb)
	{
		i++;
	}
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
// #include <stdio.h>
//
// int main(){
// 	// int x =ft_sqrt(25);
// 	printf("%d", x);
// 	return 0;
// }