/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 08:59:55 by tyamagis          #+#    #+#             */
/*   Updated: 2021/02/15 15:26:03 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/*
** 0. declare vars
** 1. check errs
**	// check static -> exist (or not) pre-load buffer
**	// malloc New buffer area
**	// check '\n'
**	// -> exist then
**	// 		(join pre-load buffer)
**	// 		set char* and return
**	// -> not exist
**	// 		read and join loops until '\n' exist
** -----
** 0. DECLARE VARS
** -----
** static char *tgt_fd[256];
** - to be used for save ptr of all FDs.
** char *buf;
** - to be used for save read buf.
** - !! MUST BE FREED !! at the end of GNL.
** -----
** 1. CHECK ERROR
** -----
** -- conditions --
** - int fd must be [0 <= fd <= 255].
** - line is NOT null.
** - BUFFER_SIZE must be positive.
** - check malloc BUF failed or not.
** -- process --
** - if any err occured, then GNL return -1.
** -----
** 2. CHECK STATIC exist or not
** -----
** -- conditions --
** - each fd is already used or not
** -- process 1 - used = true --
*/

int	get_next_line(int fd, char **line)
{
	char		*buf;
	static char	*tgt_fd[256];
	int			i;

	if (((fd | 255) != 255) || !(line) || (BUFFER_SIZE <= 0) \
			|| (!(buf) = (char *)malloc(BUFFER_SIZE)))
		return (-1);
	/* -- 2. CHECK STATIC exist or not -- */
	if (tgt_fd[fd])
		// process
	/* -- 3. initialize buf[] -- */
	i = 0;
	while (i < BUFFER_SIZE)
		buf[i++] = 0;
	/* -- 4. read from buffer stream while not new lined-- */
	while ((i = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		/* check nl is or not in read */
			/* nl exist */
				/*  process */
			/* nl doesnt exist */
				/* process */
	}
	/* ft_a ki ta */
	return (1);
}
