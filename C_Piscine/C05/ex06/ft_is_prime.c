/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 01:26:19 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/03/02 01:26:21 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
// #include <stdio.h>
// int main(){
//     printf("%d\n", ft_is_prime(4));
//     printf("%d\n", ft_is_prime(9));
//     printf("%d\n", ft_is_prime(7));
//     printf("%d\n", ft_is_prime(111));
//     printf("%d\n", ft_is_prime(14));
//     printf("%d", ft_is_prime(44));
//     return 0;
// }
