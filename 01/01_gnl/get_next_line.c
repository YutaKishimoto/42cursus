/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 08:59:55 by tyamagis          #+#    #+#             */
/*   Updated: 2020/12/20 10:35:00 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int get_next_line(int fd, char **line)
{
	static char *buf;
	size_t		len;
	static int	i;

	if (fd < 0 || fd > 255 || !line || !(buf = malloc(BUFFER_SIZE)))
		return (-1);
	len = 0;
	while (read(fd, buf, BUFFER_SIZE) > 0)
	{
		while (buf[i] != '\n' && i++ < BUFFER_SIZE)
			len++;
		if (buf[i] == '\n')
		{
			if (!(*line = (char *)malloc(len + 1)))
			{
				free(buf);
				free(*line);
				return (-1);
			}
			i = -1;
			while (i++ < len)
				*line[i] = buf[i];
			*line[i] = '\0';
			return (1);
		}
		// case 2 : \n dont exist in 1st loop
		// case 3 : EOF(ctrl + D) is in loop
		// case 4 : empty
	}
}
