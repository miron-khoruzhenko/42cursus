/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 21:34:03 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/07/30 21:34:04 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	control(char c, char const *s)
{
	size_t	a;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] == c)
			return (1);
		a++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	bas;
	size_t	son;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	bas = 0;
	son = ft_strlen(s1);
	while (s1[bas] && control(s1[bas], set))
		bas++;
	while ((son > bas) && (control(s1[son - 1], set)))
		son--;
	str = (char *)malloc(sizeof(char) * (son - bas + 1));
	if (!str)
		return (0);
	a = 0;
	while (bas < son)
	{
		str[a] = s1[bas];
		a++;
		bas++;
	}
	str[a] = '\0';
	return (str);
}
