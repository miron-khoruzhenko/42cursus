/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:56:27 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/02/21 16:20:21 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	if (!(to_find[0]))
	{
		return (str);
	}
	while (str[i])
	{
		x = 0;
		while (str[i + x] == to_find[x] && str[i + x] != '\0')
		{
			if (!(to_find[x + 1]))
			{
				return (&str[i]);
			}
			x++;
		}
		i++;
	}
	return (0);
}

//o sey unutma
