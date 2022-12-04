/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 01:21:55 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/03/02 01:21:57 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	sonuc;

	sonuc = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		sonuc = nb * ft_recursive_power(nb, (power - 1));
		return (sonuc);
	}
}
// #include <stdio.h>
// int main(){
// 	int x =ft_recursive_power(5, 2);
// 	printf("%d", x);
// 	return 0;
// }