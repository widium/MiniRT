/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennace <ebennace@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:56:18 by ebennace          #+#    #+#             */
/*   Updated: 2022/10/28 11:56:19 by ebennace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minirt.h"

void load_file(char *path)
{
    int fd;
    char *line;

    fd = open(path, O_RDONLY);
    if (fd == -1)
        return ;
    while (1)
    {
        line = get_next_line(fd);
        if (!line)
        {
            free(line);
            break;
        }
        else
            printf("Line : [%s]\n", line);
        free(line);
    }
    close(fd);
}