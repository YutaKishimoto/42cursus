/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 08:59:55 by tyamagis          #+#    #+#             */
/*   Updated: 2020/12/13 10:59:30 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int get_next_line(int fd, char **line)
{
	static int	si;
	int			i;
	char		*buf;
	ssize_t		read_t;


	if (!(buf = malloc(BUFFER_SIZE)))				// BUFFER allocate
		return (NULL);
// repeat while buf[si] != \n ----
	if ((read_t = read(fd, buf, BUFFER_SIZE)) < 0)	// read Err
		return (-1);
	else if (read_t == 0)							// No read
		return (0);
	/* count line length */
	*line = malloc(/* line length */);				// save line allocate
	i = 0;
	while (i < read_t && buf[si] != '\n')
		*line[i] = buf[si];
// repeat here---------------------
	
	// if comes \n return.
	return (1);
}
