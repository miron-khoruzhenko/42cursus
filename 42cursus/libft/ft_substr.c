/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 23:56:05 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/07/30 23:56:06 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	a;
	size_t	b;

	if (!s)
		return (0);
	b = 0;
	if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
		return (ft_strdup(""));
	while (len > b && s[start + b] != '\0')
		b++;
	str = malloc(sizeof(char) * b + 1);
	if (!str)
		return (NULL);
	a = 0;
	while (a < b)
	{
		str[a] = s[start + a];
		a++;
	}
	str[a] = '\0';
	return (str);
}
