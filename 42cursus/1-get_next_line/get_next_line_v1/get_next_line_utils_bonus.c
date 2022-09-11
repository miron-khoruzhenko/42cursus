/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 06:42:26 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/08/28 06:42:32 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_findchr(char *str, int c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	if (c == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == (char) c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *str1, char *str2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!str1)
	{
		str1 = malloc(sizeof(char) * 1);
		str1[0] = '\0';
	}
	if (!str1 || !str2)
		return (NULL);
	str = malloc((ft_strlen(str1) + ft_strlen(str2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	while (str1[i++] != '\0')
		str[i] = str1[i];
	while (str2[j] != '\0')
		str[i++] = str2[j++];
	str[ft_strlen(str1) + ft_strlen(str2)] = '\0';
	free(str1);
	return (str);
}
