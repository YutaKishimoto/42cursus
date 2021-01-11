/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyamagis <tyamagis@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 08:59:55 by tyamagis          #+#    #+#             */
/*   Updated: 2021/01/11 18:54:44 by tyamagis         ###   ########.fr       */
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
}
