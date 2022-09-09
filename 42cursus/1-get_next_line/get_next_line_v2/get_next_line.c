/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoruzh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:15:57 by mkhoruzh          #+#    #+#             */
/*   Updated: 2022/09/09 17:16:00 by mkhoruzh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_save()
{

}

char *ft_get_line(char *save)
{

}

char *ft_read_and_save(int fd, char *bank)
{
    int     processed_bytes;
    char    *buffer;

    processed_bytes = 1;
    buffer = malloc(BUFFER_SIZE + 1);
    if(!buffer)
        return NULL;
    while(!ft_strchr(bank, '\n') && processed_bytes != 0)
    {
        read(fd, buffer, BUFFER_SIZE);
        if(processed_bytes == -1)
        {
            free(buffer);
            return NULL;
        }
        buffer[processed_bytes] == '\0';
        bank = ft_strjoin()
    }
}

char *get_next_line(int fd)
{
    char    *bank;
    char    *line;

    if(fd < 0 || BUFFER_SIZE <= 0)
        return NULL;

    bank[fd] = ft_read_and_save(fd, bank);
}

#include <fcntl.h>
#include <stdio.h>

int main()
{
    int x;
    char *output;

    x = open("test.txt", O_CREAT | O_RDWR);
    output = get_next_line(x);
    printf("%s", output);

}