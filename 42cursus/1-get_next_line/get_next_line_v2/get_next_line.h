/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:16:48 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/09/09 17:16:49 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
#   define GET_NEXT_LINE_BONUS_H

#   include <stdlib.h>
#   include <unistd.h>

#   ifndef BUFFER_SIZE
#       define BUFFER_SIZE 42
#   endif

size_t  ft_strlen(char *str);
char    *ft_strchr(char *s, int c);
char    *ft_strjoin(char *s1, char *s2);
char    *ft_read_and_save(int fd, char *save);
char    *ft_get_line(char *save);
char    *ft_save(char *save);
char    *get_next_line(int fd);

#endif