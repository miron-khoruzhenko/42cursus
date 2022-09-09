/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:45:50 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/08/27 18:45:52 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_print_hexnum(unsigned int num, char const format);
int		ft_print_unbr(unsigned int num);
int		ft_print_nbr(int num);
int		ft_print_pointer(void *point);
int		ft_print_str(char *str);
int		ft_print_char(char c);
int		ft_printf(const char *str, ...);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *str);

#endif
