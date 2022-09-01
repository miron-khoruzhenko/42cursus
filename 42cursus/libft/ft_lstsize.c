/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:29:30 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/07/30 21:29:31 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		a;

	a = 0;
	while (lst != NULL)
	{
		a++;
		lst = lst -> next;
	}
	return (a);
}
