/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 08:59:55 by tyamagis          #+#    #+#             */
/*   Updated: 2021/02/15 23:36:56 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int free_buf(char **line, int i)
{
	while (i < 0)
		free(line[--i]);
	return (-1);
}

int check_nl(char **line, int i, char *tgt_fd)
{
	int j;

	j = 0;
	while (j < BUFFER_SIZE)
	{
		if (line[i][j] == '\n')
		{
			line[i][j] = '\0';
			if ((j + 1) < BUFFER_SIZE)
				tgt_fd = &line[i][j + 1];
			return (1);
		}
		j++;
	}
}

int	get_next_line(int fd, char **line)
{
	char		*buf;
	static char	*tgt_fd[256];
	int			i;
	ssize_t		rbyte;

	if (((fd | 255) != 255) || !line || (BUFFER_SIZE <= 0))
		return (-1);
	i = 0;
	while (1)
	{
		line[i] = (char *)malloc(BUFFER_SIZE));
		if (!*line)
			return (free_buf(line, i));
		if (tgt_fd[fd])
			line[i++] = tgt_fd[fd];
		rbyte = read(fd, line[i++], BUFFER_SIZE);
		if (!rbyte)
		{
			tgt_fd[fd] = 0;
			return (0);
		}
		if (check_nl(line, i, tgt_fd[fd]))
			return (1);
	}
	return (-1);
}

/*
** TEST MAIN.C

#include <fcntl.h>
#include <stdio.h>

int main(void){
	int fd;
	int r = 1;
	char **line = (char **)malloc(sizeof(char *));

	fd = open(path, );
	while (r = get_next_line(fd, line))
		printf("%s", line);
	return (0);
}

*/