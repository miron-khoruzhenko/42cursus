/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:45:33 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/08/27 18:45:34 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexnum(unsigned int num, char const format)
{
	int	len;

	len = 0;
	if (format == 'x')
	{
		if (num >= 16)
		{
			len += ft_print_hexnum((num / 16), format);
			len += ft_print_hexnum((num % 16), format);
		}
		else
			len += ft_print_char("0123456789abcdef"[num % 16]);
	}
	else if (format == 'X')
	{
		if (num >= 16)
		{
			len += ft_print_hexnum((num / 16), format);
			len += ft_print_hexnum((num % 16), format);
		}
		else
			len += ft_print_char("0123456789ABCDEF"[num % 16]);
	}
	return (len);
}

int	ft_cont(va_list args, char format)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (format == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (format == 'p')
	{
		ft_print_str("0x");
		return (ft_print_pointer(va_arg(args, void *)) + 2);
	}
	else if (format == 'd' || format == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_print_unbr(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_print_hexnum(va_arg(args, unsigned int), format));
	else if (format == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	va_start(args, str);
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_cont(args, str[i + 1]);
			i++;
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
