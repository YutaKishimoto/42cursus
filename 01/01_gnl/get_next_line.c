/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 08:59:55 by tyamagis          #+#    #+#             */
/*   Updated: 2021/02/13 19:08:09 by tyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int get_next_line(int fd, char **line)
{
	// check arg err
	// check static -> exist (or not) pre-load buffer
	// malloc New buffer area
	// check '\n'
	// -> exist then
	// 		(join pre-load buffer)
	// 		set char* and return
	// -> not exist
	// 		read and join loops until '\n' exist

	/* CHECK ARG ERR */
	if (((fd | 255) != 255) || !(line) || (BUFFER_SIZE <= 0))
		return (-1);
	
	/* check static
}
